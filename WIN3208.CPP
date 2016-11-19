<<<<<<< HEAD
// Win3208 - A Virtual Connection to DCU 3208, µVision

/*
	Kvar:
x	1)	Anropa dll-drivrutinen
	2)	Kommunikationsrutiner
x	3)	AddMenuItem för de olika anläggningarna och ducarna
z	4)	Val av rätt dll och metavar
.	5)	Alarmhantering, variabelhantering, etc
ok	6)	Upp-, ned-, höger- och vänsterpilar i display


metavar, alarmhantering, variabelhantering, funktioner, enter_calendar etc

speciellt:  enter

	Vid byte av anläggning:
        	- avallokera föregående driver
		- ladda metamod
		- loadLibrary för dll-filen
		- allokera VARS och VAR2

	Vid byte av bild:
		- ta reda på vilka variabler som används
		- hämta dessa
		- exekvera funktionen i dll
		- vilka variabler har ändrats ?
			sätt dessa i ducen 

*/

#include <owl.h>
#include <windobj.h>
#include <string.h>
#include <stdio.h>


COLORREF Display[3] = {
	0x0000C000l, // 13,1
	0x00008000l, // 13,2
	0x0000FF00l // 6,3
};

const COLORREF RedBlue[2] = {
	0x000000FFl,	// 3,3	Röd
	0x00FF0000l,	// 8,3	Blå
};

const COLORREF LED[3] = {
	0x000000FFl,	// 3,3	Röd
	0x0000FF00l,	// 6,3	Grön
	0x0000FFFFl,	// 5,3	Gul
};

const COLORREF LEDoff[3] = {
	0x00000040l,	// 3,3	Röd
	0x00004000l,	// 6,3	Grön
	0x00004040l,	// 5,3	Gul
};

const COLORREF Frame[4] = {
	0x00000000l,	// 2,3	Svart
	0x00C0C0C0l,	// 1,2	Grå
	0x00FFFFFFl,	// 1,1	Vit
	0x00808080l,	// 1,3	Grå för siffror (tangenter)
};

_CLASSDEF(TWin3208)

struct TDucState {
	int lysdiod[3];
	char 	keyCode,		// -1 na, 0-xx keycode
		keyPressed,		// true = down, 0 = up
                keyWasDown;		// true har varit nedtryck
	int  cacheLED[3];
	char displayText[41];
	char displayText2[41];
	char realDisplayText[41];
	char realDisplayText2[41];
	char available;
	long (*helpFcn)(short, ...);
	char cursor, cursorY, cursorX;
};

#define CURSOR_BLOCK	127

#define SCREEN_UP	1
#define SCREEN_DOWN	2
#define SCREEN_LEFT	4
#define SCREEN_RIGHT	8



typedef TDucState *PTDucState;

PTDucState DucState;

typedef int (FAR PASCAL *PTScreenDriverFcn)(HWND, HANDLE, PTDucState, int);
HINSTANCE hDucModule;
PTScreenDriverFcn screenDriver;
int screenPid;

int systemSound = 1;

class TWin3208 : public TWindow
{
private:
	 BOOL Drawing;
public:
	 TWin3208( PTWindowsObject AParent, PTDucState AState );
	 virtual ~TWin3208();
	 virtual LPSTR GetClassName() { return "TWin3208"; };
	 virtual void Paint( HDC PaintDC, PAINTSTRUCT& PaintInfo );
         virtual void WMLButtonDown( TMessage& Message ) = [ WM_FIRST + WM_LBUTTONDOWN ];
         virtual void WMLButtonUp( TMessage& Message ) = [ WM_FIRST + WM_LBUTTONUP ];
         virtual void WMMouseMove( TMessage& Message ) = [ WM_FIRST + WM_MOUSEMOVE ];
	 virtual void WMSetCursor( TMessage& Message ) = [ WM_FIRST + WM_SETCURSOR ];
	 virtual void WMKeyDown( TMessage& Message ) = [ WM_FIRST + WM_KEYDOWN ];
	 virtual void WMKeyUp( TMessage& Message ) = [ WM_FIRST + WM_KEYUP ];

	 virtual void SetupWindow();

    	 virtual void WMgEvent(RTMessage Msg) = [WM_FIRST + WM_TIMER];

	 HCURSOR ArrowCursor, HandCursor;
	 HICON Icon[20][2];
         HICON IVTlogo;

	 LOGFONT DisplayFontRec;
	 LOGFONT LogoFontRec;
};

_CLASSDEF(TWin3208Win)

char systemName[60];
char ducName[60];
char directory[256];
int currentSystem = -1, currentDuc = -1;

class TWin3208Win : public TWindow
{
private:
	 TDucState DucState;
	 PTWin3208 Canvas;
public:
	 TWin3208Win( PTWindowsObject AParent, LPSTR ATitle);
	 virtual LPSTR GetClassName() { return "TWin3208Win"; };
	 virtual void GetWindowClass( WNDCLASS& WndClass );
	 virtual void WMSize( TMessage& Message ) = [ WM_FIRST + WM_SIZE ];

//	 virtual void WMMenuSelect( TMessage& Message ) = [ WM_FIRST + WM_MENUSELECT ];
	 virtual void WMProcess(TMessage& Message) = [ 998 ];

	 virtual void SetupWindow();
};


class TWin3208App : public TApplication
{
public:
	TWin3208App( LPSTR name, HINSTANCE hInstance,
		  HINSTANCE hPrevInstance, LPSTR lpCmd,
		  int nCmdShow)
	        : TApplication(name, hInstance,
			       hPrevInstance, lpCmd, nCmdShow) {  };
	virtual void InitMainWindow( void );
};


HBRUSH hbrshLEDon[3], hbrshLEDoff[3];

HBITMAP UpArrow;
HBRUSH hbrshUpArrow;

void memfill(unsigned char *s, int len, unsigned char c)
{
  while (len-- > 0)
  	*s++ = c;
}

// --------------- TWin3208 ------------------------

TWin3208::TWin3208( PTWindowsObject AParent, PTDucState ADucState) :
                   TWindow(AParent, NULL)
{
  Attr.Style = WS_BORDER | WS_CHILD | WS_VISIBLE;
  DucState = ADucState;
  Drawing = FALSE;

  DucState->cacheLED[0] = -9;
  DucState->cacheLED[1] = -9;
  DucState->cacheLED[2] = -9;


  int i, j;
  char Temp[30];


  char  *icons[20] = {
	"icon_0",	"Icon_1",	"Icon_2",      "Icon_3",
	"Icon_4",	"Icon_5",	"Icon_6",
	"Icon_7",	"Icon_8",	"Icon_9",
	"plusmin",	"punkt",
	"up",		"down",
	"help",		"enter",
	"right",	"left",
	"change",	"alarm"
  };

  HINSTANCE hinst;


  hinst = GetApplicationObject()->hInstance;
  for (i = 0; i < 20; i ++) {
  	strcpy(Temp, icons[i]);
	for (j = 0; j < 2; j++) {
		if (j) strcat(Temp, "p");
		Icon[i][j] = LoadIcon(hinst, Temp);
	}
  }

  IVTlogo = LoadIcon(hinst, "IVTlogo");


  UpArrow = LoadBitmap(hinst, "UpArrow");
  hbrshUpArrow = CreatePatternBrush(UpArrow);

#if 0
  DisplayFontRec.lfHeight = 14;
  DisplayFontRec.lfWidth = 0;
  DisplayFontRec.lfEscapement = 0;
  DisplayFontRec.lfOrientation = 0;
  DisplayFontRec.lfWeight = FW_BOLD;
  DisplayFontRec.lfItalic = 0;
  DisplayFontRec.lfUnderline = 0;
  DisplayFontRec.lfStrikeOut = 0;
  DisplayFontRec.lfCharSet = ANSI_CHARSET;
  DisplayFontRec.lfOutPrecision = OUT_DEFAULT_PRECIS;
  DisplayFontRec.lfClipPrecision = CLIP_DEFAULT_PRECIS;
  DisplayFontRec.lfQuality = PROOF_QUALITY;
  DisplayFontRec.lfPitchAndFamily = VARIABLE_PITCH | FF_ROMAN;
  strcpy(DisplayFontRec.lfFaceName,"Duc3208");	// "Courier");
#else
  DisplayFontRec.lfHeight = 11;
  DisplayFontRec.lfWidth = 11;
  DisplayFontRec.lfEscapement = 0;
  DisplayFontRec.lfOrientation = 0;
  DisplayFontRec.lfWeight = FW_BOLD;
  DisplayFontRec.lfItalic = 0;
  DisplayFontRec.lfUnderline = 0;
  DisplayFontRec.lfStrikeOut = 0;
  DisplayFontRec.lfCharSet = SYMBOL_CHARSET;
  DisplayFontRec.lfOutPrecision = OUT_DEFAULT_PRECIS;
  DisplayFontRec.lfClipPrecision = CLIP_DEFAULT_PRECIS;
  DisplayFontRec.lfQuality = DEFAULT_QUALITY;
  DisplayFontRec.lfPitchAndFamily = DEFAULT_PITCH | FF_DONTCARE;
  strcpy(DisplayFontRec.lfFaceName,"Duc3208");
#endif

  LogoFontRec.lfHeight = 32;
  LogoFontRec.lfWidth = 0;
  LogoFontRec.lfEscapement = 0;
  LogoFontRec.lfOrientation = 0;
  LogoFontRec.lfWeight = FW_HEAVY;
  LogoFontRec.lfItalic = 1;
  LogoFontRec.lfUnderline = 1;
  LogoFontRec.lfStrikeOut = 0;
  LogoFontRec.lfCharSet = ANSI_CHARSET;
  LogoFontRec.lfOutPrecision = OUT_DEFAULT_PRECIS;
  LogoFontRec.lfClipPrecision = CLIP_DEFAULT_PRECIS;
  LogoFontRec.lfQuality = PROOF_QUALITY;
  LogoFontRec.lfPitchAndFamily = VARIABLE_PITCH | FF_ROMAN;
  strcpy(LogoFontRec.lfFaceName,"Arial");


  for (i = 0; i < 3; i ++) {
	hbrshLEDon[i] = CreateSolidBrush(LED[i]);
	hbrshLEDoff[i] = CreateSolidBrush(LEDoff[i]);
  }


//  char Temp[30];

//  _fstrcpy(Temp, IconName);

//  strcpy(Temp, "EllipseCursor");
//  HandCursor = LoadCursor(GetApplicationObject()->hInstance, Temp);

  ArrowCursor = LoadCursor(NULL, IDC_ARROW);

};

void TWin3208::SetupWindow()
{
  TWindow::SetupWindow();
  SetTimer(HWindow, 17, 100, NULL);
};

TWin3208::~TWin3208()
{
  int i, j;
  for (i = 0; i < 3; i ++) {
    DeleteObject(hbrshLEDon[i]);
    DeleteObject(hbrshLEDoff[i]);
  }

  for (i = 0; i < 20; i ++)
	for (j = 0; j < 2; j++)
		DestroyIcon(Icon[i][j]);
  DestroyIcon(IVTlogo);

  KillTimer(HWindow, 17);
};

#define XS 2.3
#define YS 2.3

#define X_KEY	XS * 120
#define Y_KEY	YS * 100
#define X_KEY2	(X_KEY + 3*32 + 20)
#define Y_KEY2	Y_KEY

#define X_KEY2max	(X_KEY2 + 2*32)
#define Y_KEYmax	(Y_KEY + 4*32)

#define X_DISPLAY     XS * 41

//#define X_DISPLAY     XS * 64
#define Y_DISPLAY     YS * 55
#define Y_DISPLAY2    YS * (56 + 5)

void TWin3208::Paint( HDC PaintDC, PAINTSTRUCT& )
{
  HBRUSH OldBrush;

  RECT R;

  GetClientRect(HWindow, &R);



  OldBrush = (HBRUSH)SelectObject(PaintDC, CreateSolidBrush(Frame[0]));
  Rectangle(PaintDC, 0, 0, XS * 281, YS * 219);
  DeleteObject(SelectObject(PaintDC, OldBrush));

  OldBrush = (HBRUSH)SelectObject(PaintDC, CreateSolidBrush(Frame[1]));
  RoundRect(PaintDC, XS * 20, YS * 20, XS * 260, YS * 187, XS * 10, YS * 20);
  DeleteObject(SelectObject(PaintDC, OldBrush));

  OldBrush = (HBRUSH)SelectObject(PaintDC, CreateSolidBrush(Display[1]));
//  Rectangle(PaintDC, XS * 63, YS * 53, XS * 222, YS * 69);
  Rectangle(PaintDC, XS * 40, YS * 53, XS * 240, YS * 69);
  DeleteObject(SelectObject(PaintDC, OldBrush));

  DeleteObject(SelectObject(PaintDC, CreateFontIndirect(&DisplayFontRec)));

  SetBkColor(PaintDC, Frame[1]);
  SetTextColor(PaintDC, RGB(255, 255, 255));
  TextOut(PaintDC, XS * 70, YS * 100, "Larm", 4);
  TextOut(PaintDC, XS * 70, YS * 110, "CPU", 3);
  TextOut(PaintDC, XS * 70, YS * 120, "Service", 7);

  int i, x, y;
  void keyPosition(int keyCode, int &x, int &y);
  int keyboard(int xPos, int yPos);

  for (i = 0; i < 20; i ++) {
	keyPosition(i, x, y);
	DrawIcon(PaintDC, x, y, Icon[i][0]);
  }


  DrawIcon(PaintDC, XS * 26, YS * 166, IVTlogo);


  SelectObject(PaintDC, DucState->lysdiod[0] & 1 ? hbrshLEDon[0] : hbrshLEDoff[0]);
  Ellipse(PaintDC, XS * 63, YS * 100, XS * 68, YS * 105);
  SelectObject(PaintDC, DucState->lysdiod[1] & 1 ? hbrshLEDon[1] : hbrshLEDoff[1]);
  Ellipse(PaintDC, XS * 63, YS * 110, XS * 68, YS * 115);
  SelectObject(PaintDC, DucState->lysdiod[2] & 1 ? hbrshLEDon[2] : hbrshLEDoff[2]);
  Ellipse(PaintDC, XS * 63, YS * 120, XS * 68, YS * 125);


  DeleteObject(SelectObject(PaintDC, CreateFontIndirect(&DisplayFontRec)));
/*
  TE = GetTextExtent(DC, displayText, strlen(displayText));
*/
  SetBkColor(PaintDC, Display[1]);
  SetTextColor(PaintDC, RGB(0, 0, 0));

  TextOut(PaintDC, X_DISPLAY, Y_DISPLAY, DucState->displayText, 40);
  TextOut(PaintDC, X_DISPLAY, Y_DISPLAY2, DucState->displayText2, 40);

  SetBkColor(PaintDC, Frame[1]);
  SetTextColor(PaintDC, RGB(255, 255, 255));
  DeleteObject(SelectObject(PaintDC, CreateFontIndirect(&LogoFontRec)));
  TextOut(PaintDC, XS * 42, YS * 166, "IVT CONTROL", 11);

  HDC memDC;

  memDC = CreateCompatibleDC(PaintDC);

  SelectObject(memDC, hbrshUpArrow);
//  Rectangle(PaintDC, XS * 64, YS * 40,  XS * 74, YS * 50);
//  PatBlt(PaintDC, XS * 64, YS * 40, 10, 10, PATCOPY);

  BitBlt(PaintDC, XS * 64, YS * 40, 10, 10, memDC, 0, 0, SRCCOPY);

  DeleteDC(memDC);

};

/*
!   names of each key
*/
#define KEY_PLUS_MINUS	10
#define KEY_POINT 	11
#define KEY_UP  	12
#define KEY_DOWN	13
#define KEY_HELP	14
#define KEY_ENTER	15
#define KEY_RIGHT	16
#define KEY_LEFT	17
#define KEY_CHANGE 	18
#define KEY_ALARM	19

#define NO_KEY          -1
#define TIMEOUT         -2


int keyMap[] = {		// keyMap[0] = ddd
	1, 2, 3, 4, 5, 6, 7, 8, 9,
	KEY_PLUS_MINUS, 0, KEY_POINT,
	KEY_CHANGE, KEY_ALARM,
	KEY_UP, KEY_RIGHT,
	KEY_DOWN, KEY_LEFT,
	KEY_HELP, KEY_ENTER,
        -1
};

int keyReverseMap[] = {
	10, 0, 1, 2, 3, 4, 5, 6, 7, 8,
	9, 11,		// plus/minus, punkt
        14, 16,		// up, down
 	18, 19,		// help, enter
	15, 17,		// right, left
	12, 13		// change, alarm
};

int keyboard(int xPos, int yPos)
{
  int x, y, keyCode = 20;


  if (xPos < X_KEY || xPos > X_KEY2max || yPos < Y_KEY || Y_KEYmax < yPos)
  	;
  else if (xPos < X_KEY2) {
	x = (xPos - X_KEY) / 32;
	y = (yPos - Y_KEY) / 32;
	if ((0 <= y && y <= 3) && (0 <= x && x <= 2))
		keyCode = x + y * 3;
  } else {
	x = (xPos - X_KEY2) / 32;
	y = (yPos - Y_KEY2) / 32;
	if ((0 <= y && y <= 3) && (0 <= x && x <= 1))
		keyCode = 12 + x + y * 2;
  }
  return keyMap[keyCode];	// mappa till 3208-key codes   
}

void keyPosition(int keyCode, int &x, int &y)
{
  keyCode = keyReverseMap[keyCode];
  if (keyCode >= 12) {
	keyCode -= 12;
	x = X_KEY2 + 32 * (keyCode % 2);
	y = Y_KEY2 + 32 * (keyCode / 2);
  } else {
	x = X_KEY + 32 * (keyCode % 3);
	y = Y_KEY + 32 * (keyCode / 3);
  }
}

void TWin3208::WMLButtonDown( TMessage& Message )
{
  HDC DC;
  int x, y, k;

  if ((k = keyboard(Message.LP.Lo, Message.LP.Hi)) != -1) {
	DC = GetDC(HWindow);
        keyPosition(k, x, y);
	DrawIcon(DC, x, y, Icon[k][1]);
	DucState->keyCode = k;
        DucState->keyPressed = 1;
	ReleaseDC(HWindow, DC);
  }
};

void TWin3208::WMMouseMove( TMessage& Message )
{
  int key = -1;
  HDC DC;
  int x, y;

  if (DucState->keyPressed) {
	key = keyboard(Message.LP.Lo, Message.LP.Hi);
        if (key != DucState->keyCode) {
		DC = GetDC(HWindow);
	        keyPosition(DucState->keyCode, x, y);
		DrawIcon(DC, x, y, Icon[DucState->keyCode][0]);
		ReleaseDC(HWindow, DC);
		DucState->keyPressed = 0;
	}
  }
};

void TWin3208::WMKeyUp( TMessage& Message )
{
}

void TWin3208::WMKeyDown( TMessage& Message )
{
  switch (Message.WParam) {
	case VK_UP:
		DucState->keyCode = KEY_UP;
		DucState->keyWasDown = 1;  
		break;
	case VK_DOWN:
		DucState->keyCode = KEY_DOWN;
		DucState->keyWasDown = 1;  
		break;
  }
}

void TWin3208::WMLButtonUp( TMessage& Message)
{
  HDC DC;
  int x, y;
 

  if (DucState->keyPressed) {
	if (systemSound)
		MessageBeep(-1);
	DC = GetDC(HWindow);
        keyPosition(DucState->keyCode, x, y);
	DrawIcon(DC, x, y, Icon[DucState->keyCode][0]);


//  sprintf(DucState->displayText, "Key %d pressed", DucState->keyCode);

	ReleaseDC(HWindow, DC);
	DucState->keyPressed = 0;
// problem då vi accepterar mustryck och sedan flytt utan att vara nedtryck !
	DucState->keyWasDown = 1;
  }
};

int glb_Cnt = 0;

void TWin3208::WMgEvent(RTMessage Msg)
{
  
  glb_Cnt ++;

  HDC DC;
  static int whereAmI = 0;

  DC = GetDC(HWindow);

  HFONT hfont, hfontOld;
  hfont = CreateFontIndirect(&DisplayFontRec);
  hfontOld = (HFONT) SelectObject(DC, hfont);


  SetBkColor(DC, Display[1]);
  SetTextColor(DC, RGB(0, 0, 0));


#if 0
	switch (DucState->keyCode) {
		case 1:
			DucState->lysdiod[0] = 0;
                        break;
		case 2:
			DucState->lysdiod[0] = 1;
                        break;
		case 3:
			DucState->lysdiod[0] = 2;
                        break;
		case 4:
			DucState->lysdiod[1] = 0;
                        break;
		case 5:
			DucState->lysdiod[1] = 1;
                        break;
		case 6:
			DucState->lysdiod[1] = 2;
                        break;
		case 7:
			DucState->lysdiod[2] = 0;
                        break;
		case 8:
			DucState->lysdiod[2] = 1;
                        break;
		case 9:
			DucState->lysdiod[2] = 2;
                        break;
	}
#endif


  if (((glb_Cnt % 5) == 0) && (DucState->cursor & 1))
  	DucState->cursor ^= 2;

  int c;
  if (DucState->cursor & 2) {
	if (DucState->cursorY == 0) {
		c = DucState->displayText[DucState->cursorX];
		DucState->displayText[DucState->cursorX] = CURSOR_BLOCK;
	} else {
		c = DucState->displayText2[DucState->cursorX];
		DucState->displayText2[DucState->cursorX] = CURSOR_BLOCK;
	}
  }

  if (memcmp(DucState->displayText, DucState->realDisplayText, 40)) {
	TextOut(DC, X_DISPLAY, Y_DISPLAY, DucState->displayText, 40); // strlen(DucState->displayText));
	memcpy(DucState->realDisplayText, DucState->displayText, 40);
  }
  if (memcmp(DucState->displayText2, DucState->realDisplayText2, 40)) {
	TextOut(DC, X_DISPLAY, Y_DISPLAY2, DucState->displayText2, 40); // strlen(DucState->displayText2));
        memcpy(DucState->realDisplayText2, DucState->displayText2, 40);
  }

  if (DucState->cursor & 2) {		// cursor currently visible ?
	if (DucState->cursorY == 0) {
		DucState->displayText[DucState->cursorX] = c;
	} else {
		DucState->displayText2[DucState->cursorX] = c;
	}
  }


  SelectObject(DC, hfontOld);
  DeleteObject(hfont);

  if ((glb_Cnt % 5) == 0) {
    int n;
    n = (glb_Cnt % 10) ? 3 : 2;
    if (DucState->lysdiod[0] & 2)
	DucState->lysdiod[0] = n;
    if (DucState->lysdiod[1] & 2)
	DucState->lysdiod[1] = n;
    if (DucState->lysdiod[2] & 2)
	DucState->lysdiod[2] = n;
  }

  if (DucState->lysdiod[0] != DucState->cacheLED[0]) {
  	DucState->cacheLED[0] = DucState->lysdiod[0];
	SelectObject(DC, DucState->lysdiod[0] & 1 ? hbrshLEDon[0] : hbrshLEDoff[0]);
	Ellipse(DC, XS * 63, YS * 100, XS * 68, YS * 105);
  }
  if (DucState->lysdiod[1] != DucState->cacheLED[1]) {
  	DucState->cacheLED[1] = DucState->lysdiod[1];
	SelectObject(DC, DucState->lysdiod[1] & 1 ? hbrshLEDon[1] : hbrshLEDoff[1]);
	Ellipse(DC, XS * 63, YS * 110, XS * 68, YS * 115);
  }
  if (DucState->lysdiod[2] != DucState->cacheLED[2]) {
	DucState->cacheLED[2] = DucState->lysdiod[2];
	SelectObject(DC, DucState->lysdiod[2] & 1 ? hbrshLEDon[2] : hbrshLEDoff[2]);
	Ellipse(DC, XS * 63, YS * 120, XS * 68, YS * 125);
  }


  if (screenDriver != NULL) {
	screenPid = screenDriver(0, hDucModule, DucState, screenPid);
  }


  ReleaseDC(HWindow, DC);


};

void TWin3208::WMSetCursor( TMessage& )
{
  SetCursor(ArrowCursor);
};

long far helpFcn(short, ...)
{
	return 17; 
}

// --------------- TWin3208Win ------------------------

TWin3208Win::TWin3208Win( PTWindowsObject AParent, LPSTR ATitle) :
	      TWindow(AParent, ATitle)
{
  Attr.Style |= WS_MAXIMIZE;


  memfill(DucState.displayText, 40, ' ');
  memfill(DucState.displayText2, 40, ' ');
  memcpy(DucState.displayText, "Laddar program.. 1.904", 22);
  DucState.keyCode = -1;
  DucState.keyPressed = 0;
  DucState.lysdiod[0] = 0;
  DucState.lysdiod[1] = 1;
  DucState.lysdiod[2] = 0;
  DucState.helpFcn = helpFcn;
  DucState.cursor = 0;

  Canvas =  new TWin3208(this, &DucState);
};


void GetDUCidentifier(int msgNo)
{
  char searchItem[20], searchItem2[20];
  int i, j;

  currentSystem = i = msgNo / 64;
  currentDuc = j = msgNo % 64;

  sprintf(searchItem, "A%d", i);
  GetPrivateProfileString("Definition",
  		searchItem, "", systemName, 60, "Win3208.INI");

  sprintf(searchItem2, "Duc%d", j);
  GetPrivateProfileString(searchItem, searchItem2, "", ducName, 60, "Win3208.INI");


}

HMENU hmenu, hmenuPopUp, hmenuPopUp1; 

/*
[Definition]
A1=Kv asdasdsa asd asd
A2=Kv PumpStocken

[A1]
Duc1=LB65 - ej inkopplad


*/

void TWin3208Win::SetupWindow()
{
  TWindow::SetupWindow();

  char buff[256], searchItem[20], buff2[256], searchItem2[20];
  int i, j;

  GetPrivateProfileString("Definition", "DIR", "", directory, 255, "Win3208.INI");
  systemSound = GetPrivateProfileInt("Definition", "Sound", 1, "Win3208.INI");

  hmenu = CreateMenu();
  hmenuPopUp = CreatePopupMenu();
  for (i = 0; i < 100; i ++) {
  	sprintf(searchItem, "A%d", i);
	GetPrivateProfileString("Definition",
		searchItem, "", buff, 255, "Win3208.INI");
	if (strlen(buff)) {
	  hmenuPopUp1 = CreatePopupMenu();
	  for (j = 0; j < 64; j ++) {
	  	sprintf(searchItem2, "Duc%d", j);
		GetPrivateProfileString(searchItem, searchItem2, "", buff2, 255, "Win3208.INI");
		if (strlen(buff2)) {
			AppendMenu(hmenuPopUp1, MF_ENABLED | MF_STRING, i*64+j, buff2);
                }
	  }
	  AppendMenu(hmenuPopUp, MF_ENABLED | MF_POPUP, (UINT) hmenuPopUp1, buff);
	}
  }
  AppendMenu(hmenu, MF_ENABLED | MF_POPUP, (UINT) hmenuPopUp, "&Inkopplad till");

  AppendMenu(hmenu, MF_ENABLED | MF_STRING, 999, "&Hjälp");
  SetMenu(HWindow, hmenu);
};


LRESULT CALLBACK       Win3208WndProc(HWND hWnd, UINT message,
					    WPARAM wParam, LPARAM lParam);

void TWin3208Win::GetWindowClass( WNDCLASS& WndClass )
{
  TWindow::GetWindowClass(WndClass);
  WndClass.hbrBackground = (HBRUSH)COLOR_APPWORKSPACE + 1;
  WndClass.hIcon = LoadIcon(GetApplication()->hInstance, "duc3208");
//  WndClass.lpszMenuName = "MENU_1";
  WndClass.lpfnWndProc = Win3208WndProc;


};

#if 0
void TWin3208Win::AfterDispatchHandler()
{
  MSG msg;

  if (PeekMessage(&msg, HWindow, 0, 0, PM_NOREMOVE)) {

    if (msg.message == WM_COMMAND) {

		char buf[60];
		sprintf(buf, "%d msg", (short int) msg.wParam);

		SetWindowText(HWindow, buf);

    }
  }

}
#endif

#if 0
void TWin3208Win::WMMenuSelect(TMessage& Message)
{
	char buf[120];

        if (Message.Message == WM_MENUSELECT) {
		sprintf(buf, "3208 - %d", Message.WParam);
	}
}
#else
void TWin3208Win::WMProcess(TMessage& Message)
{
	char buf[120];

	sprintf(buf, "duc.3208 - %s, %s", systemName, ducName);
	SetWindowText(HWindow, buf);
}


void FreeDucModule()
{
  if ((int) hDucModule >= 32) {
    FreeLibrary(hDucModule);
    hDucModule = 0;
    screenDriver = 0;
  }
}

void LoadDucModule(char *DriverName)
{
  FreeDucModule();
  hDucModule = LoadLibrary(DriverName);
  if ((int) hDucModule < 32) {
	MessageBeep(-1);
	MessageBox(0, "Error loading driver", DriverName, MB_OK);
  } else {
    screenDriver = (PTScreenDriverFcn) GetProcAddress(hDucModule, "screenDriver");
    if (screenDriver != NULL) {
      screenPid = screenDriver(0, hDucModule, DucState, -1);
    } else {
	MessageBeep(-1);
	MessageBox(0, "Cannot find function 'screenDriver'", "", MB_OK);
    }
  }
}

LRESULT CALLBACK Win3208WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
//    DLGPROC  lpproc;                  // pointer to thunk for

    switch (message)
    {
	case WM_COMMAND:
	    if (wParam == 999) {
		WinHelp(hWnd, "win3208.hlp", HELP_INDEX, 0L);
                break;
	    } else if (wParam == 998) {
            	;
	    } else {
		char buf[120], DriverName[120];
//		sprintf(buf, "%d msg", (short int) wParam);

		GetDUCidentifier(wParam);
		sprintf(buf, "Win3208 - %s, %s", systemName, ducName);

		sprintf(DriverName, "%s\\A%d\\Duc%d.dll", directory, currentSystem, currentDuc);

		SetWindowText(hWnd, buf);

		LoadDucModule(DriverName);

//		PostMessage(hWnd, WM_COMMAND, 998, 0);
                break;
	    }
//            break;
	default:
            // Let windows handle all messages we choose to ignore.
            return(DefWindowProc(hWnd, message, wParam, lParam));
    }
}
#endif

void TWin3208Win::WMSize( TMessage& )
{
  int S;
  RECT R;

  GetClientRect(HWindow, &R);
  S = ((R.bottom - 8) / 17) * 3 + 1;
  MoveWindow(Canvas->HWindow, 40, 10, XS * 281, YS * 219, TRUE);
  MoveWindow(HWindow, 40, 10, 100 + XS * 281, 20 + YS * 219, TRUE);	// ???
  SetWindowText(HWindow, "Win3208 - Kv Oxhuvudet, duc 3");
};


// --------------- TWin3208App ------------------------

void TWin3208App::InitMainWindow()
{
	MainWindow = new TWin3208Win(NULL, "Win 3208");
}

// -------------Main Program--------------------

int PASCAL WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
		   LPSTR lpCmd, int nCmdShow)
{
	TWin3208App App( "Win3208", hInstance, hPrevInstance,
		lpCmd, nCmdShow);
	App.Run();
	FreeDucModule();
	return ( App.Status );
=======
// Win3208 - A Virtual Connection to DCU 3208, µVision

/*
	Kvar:
x	1)	Anropa dll-drivrutinen
	2)	Kommunikationsrutiner
x	3)	AddMenuItem för de olika anläggningarna och ducarna
z	4)	Val av rätt dll och metavar
.	5)	Alarmhantering, variabelhantering, etc
ok	6)	Upp-, ned-, höger- och vänsterpilar i display


metavar, alarmhantering, variabelhantering, funktioner, enter_calendar etc

speciellt:  enter

	Vid byte av anläggning:
        	- avallokera föregående driver
		- ladda metamod
		- loadLibrary för dll-filen
		- allokera VARS och VAR2

	Vid byte av bild:
		- ta reda på vilka variabler som används
		- hämta dessa
		- exekvera funktionen i dll
		- vilka variabler har ändrats ?
			sätt dessa i ducen 

*/

#include <owl.h>
#include <windobj.h>
#include <string.h>
#include <stdio.h>


COLORREF Display[3] = {
	0x0000C000l, // 13,1
	0x00008000l, // 13,2
	0x0000FF00l // 6,3
};

const COLORREF RedBlue[2] = {
	0x000000FFl,	// 3,3	Röd
	0x00FF0000l,	// 8,3	Blå
};

const COLORREF LED[3] = {
	0x000000FFl,	// 3,3	Röd
	0x0000FF00l,	// 6,3	Grön
	0x0000FFFFl,	// 5,3	Gul
};

const COLORREF LEDoff[3] = {
	0x00000040l,	// 3,3	Röd
	0x00004000l,	// 6,3	Grön
	0x00004040l,	// 5,3	Gul
};

const COLORREF Frame[4] = {
	0x00000000l,	// 2,3	Svart
	0x00C0C0C0l,	// 1,2	Grå
	0x00FFFFFFl,	// 1,1	Vit
	0x00808080l,	// 1,3	Grå för siffror (tangenter)
};

_CLASSDEF(TWin3208)

struct TDucState {
	int lysdiod[3];
	char 	keyCode,		// -1 na, 0-xx keycode
		keyPressed,		// true = down, 0 = up
                keyWasDown;		// true har varit nedtryck
	int  cacheLED[3];
	char displayText[41];
	char displayText2[41];
	char realDisplayText[41];
	char realDisplayText2[41];
	char available;
	long (*helpFcn)(short, ...);
	char cursor, cursorY, cursorX;
};

#define CURSOR_BLOCK	127

#define SCREEN_UP	1
#define SCREEN_DOWN	2
#define SCREEN_LEFT	4
#define SCREEN_RIGHT	8



typedef TDucState *PTDucState;

PTDucState DucState;

typedef int (FAR PASCAL *PTScreenDriverFcn)(HWND, HANDLE, PTDucState, int);
HINSTANCE hDucModule;
PTScreenDriverFcn screenDriver;
int screenPid;

int systemSound = 1;

class TWin3208 : public TWindow
{
private:
	 BOOL Drawing;
public:
	 TWin3208( PTWindowsObject AParent, PTDucState AState );
	 virtual ~TWin3208();
	 virtual LPSTR GetClassName() { return "TWin3208"; };
	 virtual void Paint( HDC PaintDC, PAINTSTRUCT& PaintInfo );
         virtual void WMLButtonDown( TMessage& Message ) = [ WM_FIRST + WM_LBUTTONDOWN ];
         virtual void WMLButtonUp( TMessage& Message ) = [ WM_FIRST + WM_LBUTTONUP ];
         virtual void WMMouseMove( TMessage& Message ) = [ WM_FIRST + WM_MOUSEMOVE ];
	 virtual void WMSetCursor( TMessage& Message ) = [ WM_FIRST + WM_SETCURSOR ];
	 virtual void WMKeyDown( TMessage& Message ) = [ WM_FIRST + WM_KEYDOWN ];
	 virtual void WMKeyUp( TMessage& Message ) = [ WM_FIRST + WM_KEYUP ];

	 virtual void SetupWindow();

    	 virtual void WMgEvent(RTMessage Msg) = [WM_FIRST + WM_TIMER];

	 HCURSOR ArrowCursor, HandCursor;
	 HICON Icon[20][2];
         HICON IVTlogo;

	 LOGFONT DisplayFontRec;
	 LOGFONT LogoFontRec;
};

_CLASSDEF(TWin3208Win)

char systemName[60];
char ducName[60];
char directory[256];
int currentSystem = -1, currentDuc = -1;

class TWin3208Win : public TWindow
{
private:
	 TDucState DucState;
	 PTWin3208 Canvas;
public:
	 TWin3208Win( PTWindowsObject AParent, LPSTR ATitle);
	 virtual LPSTR GetClassName() { return "TWin3208Win"; };
	 virtual void GetWindowClass( WNDCLASS& WndClass );
	 virtual void WMSize( TMessage& Message ) = [ WM_FIRST + WM_SIZE ];

//	 virtual void WMMenuSelect( TMessage& Message ) = [ WM_FIRST + WM_MENUSELECT ];
	 virtual void WMProcess(TMessage& Message) = [ 998 ];

	 virtual void SetupWindow();
};


class TWin3208App : public TApplication
{
public:
	TWin3208App( LPSTR name, HINSTANCE hInstance,
		  HINSTANCE hPrevInstance, LPSTR lpCmd,
		  int nCmdShow)
	        : TApplication(name, hInstance,
			       hPrevInstance, lpCmd, nCmdShow) {  };
	virtual void InitMainWindow( void );
};


HBRUSH hbrshLEDon[3], hbrshLEDoff[3];

HBITMAP UpArrow;
HBRUSH hbrshUpArrow;

void memfill(unsigned char *s, int len, unsigned char c)
{
  while (len-- > 0)
  	*s++ = c;
}

// --------------- TWin3208 ------------------------

TWin3208::TWin3208( PTWindowsObject AParent, PTDucState ADucState) :
                   TWindow(AParent, NULL)
{
  Attr.Style = WS_BORDER | WS_CHILD | WS_VISIBLE;
  DucState = ADucState;
  Drawing = FALSE;

  DucState->cacheLED[0] = -9;
  DucState->cacheLED[1] = -9;
  DucState->cacheLED[2] = -9;


  int i, j;
  char Temp[30];


  char  *icons[20] = {
	"icon_0",	"Icon_1",	"Icon_2",      "Icon_3",
	"Icon_4",	"Icon_5",	"Icon_6",
	"Icon_7",	"Icon_8",	"Icon_9",
	"plusmin",	"punkt",
	"up",		"down",
	"help",		"enter",
	"right",	"left",
	"change",	"alarm"
  };

  HINSTANCE hinst;


  hinst = GetApplicationObject()->hInstance;
  for (i = 0; i < 20; i ++) {
  	strcpy(Temp, icons[i]);
	for (j = 0; j < 2; j++) {
		if (j) strcat(Temp, "p");
		Icon[i][j] = LoadIcon(hinst, Temp);
	}
  }

  IVTlogo = LoadIcon(hinst, "IVTlogo");


  UpArrow = LoadBitmap(hinst, "UpArrow");
  hbrshUpArrow = CreatePatternBrush(UpArrow);

#if 0
  DisplayFontRec.lfHeight = 14;
  DisplayFontRec.lfWidth = 0;
  DisplayFontRec.lfEscapement = 0;
  DisplayFontRec.lfOrientation = 0;
  DisplayFontRec.lfWeight = FW_BOLD;
  DisplayFontRec.lfItalic = 0;
  DisplayFontRec.lfUnderline = 0;
  DisplayFontRec.lfStrikeOut = 0;
  DisplayFontRec.lfCharSet = ANSI_CHARSET;
  DisplayFontRec.lfOutPrecision = OUT_DEFAULT_PRECIS;
  DisplayFontRec.lfClipPrecision = CLIP_DEFAULT_PRECIS;
  DisplayFontRec.lfQuality = PROOF_QUALITY;
  DisplayFontRec.lfPitchAndFamily = VARIABLE_PITCH | FF_ROMAN;
  strcpy(DisplayFontRec.lfFaceName,"Duc3208");	// "Courier");
#else
  DisplayFontRec.lfHeight = 11;
  DisplayFontRec.lfWidth = 11;
  DisplayFontRec.lfEscapement = 0;
  DisplayFontRec.lfOrientation = 0;
  DisplayFontRec.lfWeight = FW_BOLD;
  DisplayFontRec.lfItalic = 0;
  DisplayFontRec.lfUnderline = 0;
  DisplayFontRec.lfStrikeOut = 0;
  DisplayFontRec.lfCharSet = SYMBOL_CHARSET;
  DisplayFontRec.lfOutPrecision = OUT_DEFAULT_PRECIS;
  DisplayFontRec.lfClipPrecision = CLIP_DEFAULT_PRECIS;
  DisplayFontRec.lfQuality = DEFAULT_QUALITY;
  DisplayFontRec.lfPitchAndFamily = DEFAULT_PITCH | FF_DONTCARE;
  strcpy(DisplayFontRec.lfFaceName,"Duc3208");
#endif

  LogoFontRec.lfHeight = 32;
  LogoFontRec.lfWidth = 0;
  LogoFontRec.lfEscapement = 0;
  LogoFontRec.lfOrientation = 0;
  LogoFontRec.lfWeight = FW_HEAVY;
  LogoFontRec.lfItalic = 1;
  LogoFontRec.lfUnderline = 1;
  LogoFontRec.lfStrikeOut = 0;
  LogoFontRec.lfCharSet = ANSI_CHARSET;
  LogoFontRec.lfOutPrecision = OUT_DEFAULT_PRECIS;
  LogoFontRec.lfClipPrecision = CLIP_DEFAULT_PRECIS;
  LogoFontRec.lfQuality = PROOF_QUALITY;
  LogoFontRec.lfPitchAndFamily = VARIABLE_PITCH | FF_ROMAN;
  strcpy(LogoFontRec.lfFaceName,"Arial");


  for (i = 0; i < 3; i ++) {
	hbrshLEDon[i] = CreateSolidBrush(LED[i]);
	hbrshLEDoff[i] = CreateSolidBrush(LEDoff[i]);
  }


//  char Temp[30];

//  _fstrcpy(Temp, IconName);

//  strcpy(Temp, "EllipseCursor");
//  HandCursor = LoadCursor(GetApplicationObject()->hInstance, Temp);

  ArrowCursor = LoadCursor(NULL, IDC_ARROW);

};

void TWin3208::SetupWindow()
{
  TWindow::SetupWindow();
  SetTimer(HWindow, 17, 100, NULL);
};

TWin3208::~TWin3208()
{
  int i, j;
  for (i = 0; i < 3; i ++) {
    DeleteObject(hbrshLEDon[i]);
    DeleteObject(hbrshLEDoff[i]);
  }

  for (i = 0; i < 20; i ++)
	for (j = 0; j < 2; j++)
		DestroyIcon(Icon[i][j]);
  DestroyIcon(IVTlogo);

  KillTimer(HWindow, 17);
};

#define XS 2.3
#define YS 2.3

#define X_KEY	XS * 120
#define Y_KEY	YS * 100
#define X_KEY2	(X_KEY + 3*32 + 20)
#define Y_KEY2	Y_KEY

#define X_KEY2max	(X_KEY2 + 2*32)
#define Y_KEYmax	(Y_KEY + 4*32)

#define X_DISPLAY     XS * 41

//#define X_DISPLAY     XS * 64
#define Y_DISPLAY     YS * 55
#define Y_DISPLAY2    YS * (56 + 5)

void TWin3208::Paint( HDC PaintDC, PAINTSTRUCT& )
{
  HBRUSH OldBrush;

  RECT R;

  GetClientRect(HWindow, &R);



  OldBrush = (HBRUSH)SelectObject(PaintDC, CreateSolidBrush(Frame[0]));
  Rectangle(PaintDC, 0, 0, XS * 281, YS * 219);
  DeleteObject(SelectObject(PaintDC, OldBrush));

  OldBrush = (HBRUSH)SelectObject(PaintDC, CreateSolidBrush(Frame[1]));
  RoundRect(PaintDC, XS * 20, YS * 20, XS * 260, YS * 187, XS * 10, YS * 20);
  DeleteObject(SelectObject(PaintDC, OldBrush));

  OldBrush = (HBRUSH)SelectObject(PaintDC, CreateSolidBrush(Display[1]));
//  Rectangle(PaintDC, XS * 63, YS * 53, XS * 222, YS * 69);
  Rectangle(PaintDC, XS * 40, YS * 53, XS * 240, YS * 69);
  DeleteObject(SelectObject(PaintDC, OldBrush));

  DeleteObject(SelectObject(PaintDC, CreateFontIndirect(&DisplayFontRec)));

  SetBkColor(PaintDC, Frame[1]);
  SetTextColor(PaintDC, RGB(255, 255, 255));
  TextOut(PaintDC, XS * 70, YS * 100, "Larm", 4);
  TextOut(PaintDC, XS * 70, YS * 110, "CPU", 3);
  TextOut(PaintDC, XS * 70, YS * 120, "Service", 7);

  int i, x, y;
  void keyPosition(int keyCode, int &x, int &y);
  int keyboard(int xPos, int yPos);

  for (i = 0; i < 20; i ++) {
	keyPosition(i, x, y);
	DrawIcon(PaintDC, x, y, Icon[i][0]);
  }


  DrawIcon(PaintDC, XS * 26, YS * 166, IVTlogo);


  SelectObject(PaintDC, DucState->lysdiod[0] & 1 ? hbrshLEDon[0] : hbrshLEDoff[0]);
  Ellipse(PaintDC, XS * 63, YS * 100, XS * 68, YS * 105);
  SelectObject(PaintDC, DucState->lysdiod[1] & 1 ? hbrshLEDon[1] : hbrshLEDoff[1]);
  Ellipse(PaintDC, XS * 63, YS * 110, XS * 68, YS * 115);
  SelectObject(PaintDC, DucState->lysdiod[2] & 1 ? hbrshLEDon[2] : hbrshLEDoff[2]);
  Ellipse(PaintDC, XS * 63, YS * 120, XS * 68, YS * 125);


  DeleteObject(SelectObject(PaintDC, CreateFontIndirect(&DisplayFontRec)));
/*
  TE = GetTextExtent(DC, displayText, strlen(displayText));
*/
  SetBkColor(PaintDC, Display[1]);
  SetTextColor(PaintDC, RGB(0, 0, 0));

  TextOut(PaintDC, X_DISPLAY, Y_DISPLAY, DucState->displayText, 40);
  TextOut(PaintDC, X_DISPLAY, Y_DISPLAY2, DucState->displayText2, 40);

  SetBkColor(PaintDC, Frame[1]);
  SetTextColor(PaintDC, RGB(255, 255, 255));
  DeleteObject(SelectObject(PaintDC, CreateFontIndirect(&LogoFontRec)));
  TextOut(PaintDC, XS * 42, YS * 166, "IVT CONTROL", 11);

  HDC memDC;

  memDC = CreateCompatibleDC(PaintDC);

  SelectObject(memDC, hbrshUpArrow);
//  Rectangle(PaintDC, XS * 64, YS * 40,  XS * 74, YS * 50);
//  PatBlt(PaintDC, XS * 64, YS * 40, 10, 10, PATCOPY);

  BitBlt(PaintDC, XS * 64, YS * 40, 10, 10, memDC, 0, 0, SRCCOPY);

  DeleteDC(memDC);

};

/*
!   names of each key
*/
#define KEY_PLUS_MINUS	10
#define KEY_POINT 	11
#define KEY_UP  	12
#define KEY_DOWN	13
#define KEY_HELP	14
#define KEY_ENTER	15
#define KEY_RIGHT	16
#define KEY_LEFT	17
#define KEY_CHANGE 	18
#define KEY_ALARM	19

#define NO_KEY          -1
#define TIMEOUT         -2


int keyMap[] = {		// keyMap[0] = ddd
	1, 2, 3, 4, 5, 6, 7, 8, 9,
	KEY_PLUS_MINUS, 0, KEY_POINT,
	KEY_CHANGE, KEY_ALARM,
	KEY_UP, KEY_RIGHT,
	KEY_DOWN, KEY_LEFT,
	KEY_HELP, KEY_ENTER,
        -1
};

int keyReverseMap[] = {
	10, 0, 1, 2, 3, 4, 5, 6, 7, 8,
	9, 11,		// plus/minus, punkt
        14, 16,		// up, down
 	18, 19,		// help, enter
	15, 17,		// right, left
	12, 13		// change, alarm
};

int keyboard(int xPos, int yPos)
{
  int x, y, keyCode = 20;


  if (xPos < X_KEY || xPos > X_KEY2max || yPos < Y_KEY || Y_KEYmax < yPos)
  	;
  else if (xPos < X_KEY2) {
	x = (xPos - X_KEY) / 32;
	y = (yPos - Y_KEY) / 32;
	if ((0 <= y && y <= 3) && (0 <= x && x <= 2))
		keyCode = x + y * 3;
  } else {
	x = (xPos - X_KEY2) / 32;
	y = (yPos - Y_KEY2) / 32;
	if ((0 <= y && y <= 3) && (0 <= x && x <= 1))
		keyCode = 12 + x + y * 2;
  }
  return keyMap[keyCode];	// mappa till 3208-key codes   
}

void keyPosition(int keyCode, int &x, int &y)
{
  keyCode = keyReverseMap[keyCode];
  if (keyCode >= 12) {
	keyCode -= 12;
	x = X_KEY2 + 32 * (keyCode % 2);
	y = Y_KEY2 + 32 * (keyCode / 2);
  } else {
	x = X_KEY + 32 * (keyCode % 3);
	y = Y_KEY + 32 * (keyCode / 3);
  }
}

void TWin3208::WMLButtonDown( TMessage& Message )
{
  HDC DC;
  int x, y, k;

  if ((k = keyboard(Message.LP.Lo, Message.LP.Hi)) != -1) {
	DC = GetDC(HWindow);
        keyPosition(k, x, y);
	DrawIcon(DC, x, y, Icon[k][1]);
	DucState->keyCode = k;
        DucState->keyPressed = 1;
	ReleaseDC(HWindow, DC);
  }
};

void TWin3208::WMMouseMove( TMessage& Message )
{
  int key = -1;
  HDC DC;
  int x, y;

  if (DucState->keyPressed) {
	key = keyboard(Message.LP.Lo, Message.LP.Hi);
        if (key != DucState->keyCode) {
		DC = GetDC(HWindow);
	        keyPosition(DucState->keyCode, x, y);
		DrawIcon(DC, x, y, Icon[DucState->keyCode][0]);
		ReleaseDC(HWindow, DC);
		DucState->keyPressed = 0;
	}
  }
};

void TWin3208::WMKeyUp( TMessage& Message )
{
}

void TWin3208::WMKeyDown( TMessage& Message )
{
  switch (Message.WParam) {
	case VK_UP:
		DucState->keyCode = KEY_UP;
		DucState->keyWasDown = 1;  
		break;
	case VK_DOWN:
		DucState->keyCode = KEY_DOWN;
		DucState->keyWasDown = 1;  
		break;
  }
}

void TWin3208::WMLButtonUp( TMessage& Message)
{
  HDC DC;
  int x, y;
 

  if (DucState->keyPressed) {
	if (systemSound)
		MessageBeep(-1);
	DC = GetDC(HWindow);
        keyPosition(DucState->keyCode, x, y);
	DrawIcon(DC, x, y, Icon[DucState->keyCode][0]);


//  sprintf(DucState->displayText, "Key %d pressed", DucState->keyCode);

	ReleaseDC(HWindow, DC);
	DucState->keyPressed = 0;
// problem då vi accepterar mustryck och sedan flytt utan att vara nedtryck !
	DucState->keyWasDown = 1;
  }
};

int glb_Cnt = 0;

void TWin3208::WMgEvent(RTMessage Msg)
{
  
  glb_Cnt ++;

  HDC DC;
  static int whereAmI = 0;

  DC = GetDC(HWindow);

  HFONT hfont, hfontOld;
  hfont = CreateFontIndirect(&DisplayFontRec);
  hfontOld = (HFONT) SelectObject(DC, hfont);


  SetBkColor(DC, Display[1]);
  SetTextColor(DC, RGB(0, 0, 0));


#if 0
	switch (DucState->keyCode) {
		case 1:
			DucState->lysdiod[0] = 0;
                        break;
		case 2:
			DucState->lysdiod[0] = 1;
                        break;
		case 3:
			DucState->lysdiod[0] = 2;
                        break;
		case 4:
			DucState->lysdiod[1] = 0;
                        break;
		case 5:
			DucState->lysdiod[1] = 1;
                        break;
		case 6:
			DucState->lysdiod[1] = 2;
                        break;
		case 7:
			DucState->lysdiod[2] = 0;
                        break;
		case 8:
			DucState->lysdiod[2] = 1;
                        break;
		case 9:
			DucState->lysdiod[2] = 2;
                        break;
	}
#endif


  if (((glb_Cnt % 5) == 0) && (DucState->cursor & 1))
  	DucState->cursor ^= 2;

  int c;
  if (DucState->cursor & 2) {
	if (DucState->cursorY == 0) {
		c = DucState->displayText[DucState->cursorX];
		DucState->displayText[DucState->cursorX] = CURSOR_BLOCK;
	} else {
		c = DucState->displayText2[DucState->cursorX];
		DucState->displayText2[DucState->cursorX] = CURSOR_BLOCK;
	}
  }

  if (memcmp(DucState->displayText, DucState->realDisplayText, 40)) {
	TextOut(DC, X_DISPLAY, Y_DISPLAY, DucState->displayText, 40); // strlen(DucState->displayText));
	memcpy(DucState->realDisplayText, DucState->displayText, 40);
  }
  if (memcmp(DucState->displayText2, DucState->realDisplayText2, 40)) {
	TextOut(DC, X_DISPLAY, Y_DISPLAY2, DucState->displayText2, 40); // strlen(DucState->displayText2));
        memcpy(DucState->realDisplayText2, DucState->displayText2, 40);
  }

  if (DucState->cursor & 2) {		// cursor currently visible ?
	if (DucState->cursorY == 0) {
		DucState->displayText[DucState->cursorX] = c;
	} else {
		DucState->displayText2[DucState->cursorX] = c;
	}
  }


  SelectObject(DC, hfontOld);
  DeleteObject(hfont);

  if ((glb_Cnt % 5) == 0) {
    int n;
    n = (glb_Cnt % 10) ? 3 : 2;
    if (DucState->lysdiod[0] & 2)
	DucState->lysdiod[0] = n;
    if (DucState->lysdiod[1] & 2)
	DucState->lysdiod[1] = n;
    if (DucState->lysdiod[2] & 2)
	DucState->lysdiod[2] = n;
  }

  if (DucState->lysdiod[0] != DucState->cacheLED[0]) {
  	DucState->cacheLED[0] = DucState->lysdiod[0];
	SelectObject(DC, DucState->lysdiod[0] & 1 ? hbrshLEDon[0] : hbrshLEDoff[0]);
	Ellipse(DC, XS * 63, YS * 100, XS * 68, YS * 105);
  }
  if (DucState->lysdiod[1] != DucState->cacheLED[1]) {
  	DucState->cacheLED[1] = DucState->lysdiod[1];
	SelectObject(DC, DucState->lysdiod[1] & 1 ? hbrshLEDon[1] : hbrshLEDoff[1]);
	Ellipse(DC, XS * 63, YS * 110, XS * 68, YS * 115);
  }
  if (DucState->lysdiod[2] != DucState->cacheLED[2]) {
	DucState->cacheLED[2] = DucState->lysdiod[2];
	SelectObject(DC, DucState->lysdiod[2] & 1 ? hbrshLEDon[2] : hbrshLEDoff[2]);
	Ellipse(DC, XS * 63, YS * 120, XS * 68, YS * 125);
  }


  if (screenDriver != NULL) {
	screenPid = screenDriver(0, hDucModule, DucState, screenPid);
  }


  ReleaseDC(HWindow, DC);


};

void TWin3208::WMSetCursor( TMessage& )
{
  SetCursor(ArrowCursor);
};

long far helpFcn(short, ...)
{
	return 17; 
}

// --------------- TWin3208Win ------------------------

TWin3208Win::TWin3208Win( PTWindowsObject AParent, LPSTR ATitle) :
	      TWindow(AParent, ATitle)
{
  Attr.Style |= WS_MAXIMIZE;


  memfill(DucState.displayText, 40, ' ');
  memfill(DucState.displayText2, 40, ' ');
  memcpy(DucState.displayText, "Laddar program.. 1.904", 22);
  DucState.keyCode = -1;
  DucState.keyPressed = 0;
  DucState.lysdiod[0] = 0;
  DucState.lysdiod[1] = 1;
  DucState.lysdiod[2] = 0;
  DucState.helpFcn = helpFcn;
  DucState.cursor = 0;

  Canvas =  new TWin3208(this, &DucState);
};


void GetDUCidentifier(int msgNo)
{
  char searchItem[20], searchItem2[20];
  int i, j;

  currentSystem = i = msgNo / 64;
  currentDuc = j = msgNo % 64;

  sprintf(searchItem, "A%d", i);
  GetPrivateProfileString("Definition",
  		searchItem, "", systemName, 60, "Win3208.INI");

  sprintf(searchItem2, "Duc%d", j);
  GetPrivateProfileString(searchItem, searchItem2, "", ducName, 60, "Win3208.INI");


}

HMENU hmenu, hmenuPopUp, hmenuPopUp1; 

/*
[Definition]
A1=Kv asdasdsa asd asd
A2=Kv PumpStocken

[A1]
Duc1=LB65 - ej inkopplad


*/

void TWin3208Win::SetupWindow()
{
  TWindow::SetupWindow();

  char buff[256], searchItem[20], buff2[256], searchItem2[20];
  int i, j;

  GetPrivateProfileString("Definition", "DIR", "", directory, 255, "Win3208.INI");
  systemSound = GetPrivateProfileInt("Definition", "Sound", 1, "Win3208.INI");

  hmenu = CreateMenu();
  hmenuPopUp = CreatePopupMenu();
  for (i = 0; i < 100; i ++) {
  	sprintf(searchItem, "A%d", i);
	GetPrivateProfileString("Definition",
		searchItem, "", buff, 255, "Win3208.INI");
	if (strlen(buff)) {
	  hmenuPopUp1 = CreatePopupMenu();
	  for (j = 0; j < 64; j ++) {
	  	sprintf(searchItem2, "Duc%d", j);
		GetPrivateProfileString(searchItem, searchItem2, "", buff2, 255, "Win3208.INI");
		if (strlen(buff2)) {
			AppendMenu(hmenuPopUp1, MF_ENABLED | MF_STRING, i*64+j, buff2);
                }
	  }
	  AppendMenu(hmenuPopUp, MF_ENABLED | MF_POPUP, (UINT) hmenuPopUp1, buff);
	}
  }
  AppendMenu(hmenu, MF_ENABLED | MF_POPUP, (UINT) hmenuPopUp, "&Inkopplad till");

  AppendMenu(hmenu, MF_ENABLED | MF_STRING, 999, "&Hjälp");
  SetMenu(HWindow, hmenu);
};


LRESULT CALLBACK       Win3208WndProc(HWND hWnd, UINT message,
					    WPARAM wParam, LPARAM lParam);

void TWin3208Win::GetWindowClass( WNDCLASS& WndClass )
{
  TWindow::GetWindowClass(WndClass);
  WndClass.hbrBackground = (HBRUSH)COLOR_APPWORKSPACE + 1;
  WndClass.hIcon = LoadIcon(GetApplication()->hInstance, "duc3208");
//  WndClass.lpszMenuName = "MENU_1";
  WndClass.lpfnWndProc = Win3208WndProc;


};

#if 0
void TWin3208Win::AfterDispatchHandler()
{
  MSG msg;

  if (PeekMessage(&msg, HWindow, 0, 0, PM_NOREMOVE)) {

    if (msg.message == WM_COMMAND) {

		char buf[60];
		sprintf(buf, "%d msg", (short int) msg.wParam);

		SetWindowText(HWindow, buf);

    }
  }

}
#endif

#if 0
void TWin3208Win::WMMenuSelect(TMessage& Message)
{
	char buf[120];

        if (Message.Message == WM_MENUSELECT) {
		sprintf(buf, "3208 - %d", Message.WParam);
	}
}
#else
void TWin3208Win::WMProcess(TMessage& Message)
{
	char buf[120];

	sprintf(buf, "duc.3208 - %s, %s", systemName, ducName);
	SetWindowText(HWindow, buf);
}


void FreeDucModule()
{
  if ((int) hDucModule >= 32) {
    FreeLibrary(hDucModule);
    hDucModule = 0;
    screenDriver = 0;
  }
}

void LoadDucModule(char *DriverName)
{
  FreeDucModule();
  hDucModule = LoadLibrary(DriverName);
  if ((int) hDucModule < 32) {
	MessageBeep(-1);
	MessageBox(0, "Error loading driver", DriverName, MB_OK);
  } else {
    screenDriver = (PTScreenDriverFcn) GetProcAddress(hDucModule, "screenDriver");
    if (screenDriver != NULL) {
      screenPid = screenDriver(0, hDucModule, DucState, -1);
    } else {
	MessageBeep(-1);
	MessageBox(0, "Cannot find function 'screenDriver'", "", MB_OK);
    }
  }
}

LRESULT CALLBACK Win3208WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
//    DLGPROC  lpproc;                  // pointer to thunk for

    switch (message)
    {
	case WM_COMMAND:
	    if (wParam == 999) {
		WinHelp(hWnd, "win3208.hlp", HELP_INDEX, 0L);
                break;
	    } else if (wParam == 998) {
            	;
	    } else {
		char buf[120], DriverName[120];
//		sprintf(buf, "%d msg", (short int) wParam);

		GetDUCidentifier(wParam);
		sprintf(buf, "Win3208 - %s, %s", systemName, ducName);

		sprintf(DriverName, "%s\\A%d\\Duc%d.dll", directory, currentSystem, currentDuc);

		SetWindowText(hWnd, buf);

		LoadDucModule(DriverName);

//		PostMessage(hWnd, WM_COMMAND, 998, 0);
                break;
	    }
//            break;
	default:
            // Let windows handle all messages we choose to ignore.
            return(DefWindowProc(hWnd, message, wParam, lParam));
    }
}
#endif

void TWin3208Win::WMSize( TMessage& )
{
  int S;
  RECT R;

  GetClientRect(HWindow, &R);
  S = ((R.bottom - 8) / 17) * 3 + 1;
  MoveWindow(Canvas->HWindow, 40, 10, XS * 281, YS * 219, TRUE);
  MoveWindow(HWindow, 40, 10, 100 + XS * 281, 20 + YS * 219, TRUE);	// ???
  SetWindowText(HWindow, "Win3208 - Kv Oxhuvudet, duc 3");
};


// --------------- TWin3208App ------------------------

void TWin3208App::InitMainWindow()
{
	MainWindow = new TWin3208Win(NULL, "Win 3208");
}

// -------------Main Program--------------------

int PASCAL WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
		   LPSTR lpCmd, int nCmdShow)
{
	TWin3208App App( "Win3208", hInstance, hPrevInstance,
		lpCmd, nCmdShow);
	App.Run();
	FreeDucModule();
	return ( App.Status );
>>>>>>> origin/master
}