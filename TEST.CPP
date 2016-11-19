#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <stdarg.h>
//#include <owl.h>
#include "windows.h"

#include "win3208.h"
#include "test.h"

PTDucState ADucState;
HWND hWnd;

static long (*helpFcn)(short int, ...) = 0;

extern "C" {

extern void display(char *stf, ...);
extern void lcdhome(void);
extern void lcdcld(void);

double enter(char *fmt, ...)
{
   va_list argptr;
   int cnt;
   char buffer[256];

   va_start(argptr, fmt);
   cnt = vsprintf(buffer, fmt, argptr);
   va_end(argptr);

   display(buffer);
/*
  if (helpFcn)
	display("enter... %d", (*helpFcn)(1) );
  else
	display("enter not available");

*/

  if (ADucState->keyWasDown) {
    ADucState->keyWasDown = 0;
    switch (ADucState->keyCode) {
      case KEY_CHANGE:
		if (ADucState->cursor)             
			ADucState->cursor = 0;
                else {
			ADucState->cursor = 1;
			ADucState->cursorY = 0;
			ADucState->cursorX = 5;
		}
	break;
    }
  }

  return 0;
}

int password()
{
  display("Lösenord: ");
  ADucState->cursor |= 1;
  ADucState->cursorY = 0;
  ADucState->cursorX = 10;
}

int set_time()
{
  display("Sätter tiden");
}

int enter_calendar()
{
  display("Enter calendar");
}

char *xxxswdctime(int i)
{
  time_t *tid;
  time_t tid2;
  static char buff[50];
  struct tm tmbuff;
  static char *weekdays[] = {"S\24n", "M\06n", "Tis", "Ons", "Tor", "Fre", 
                            "L\24r" };
  static char *month[] = {"Jan", "Feb", "Mar", "Apr", "Maj", "Jun", "Jul",
      "Aug", "Sep", "Okt", "Nov", "Dec"};
    
  tid2 = time(0);
  tid = &tid2;

  memcpy(&tmbuff, localtime(tid), sizeof(struct tm));
  sprintf(buff, "%s %2d %s %d, %02d:%02d:%02d\000",
    weekdays[tmbuff.tm_wday],
    tmbuff.tm_mday,
    month[tmbuff.tm_mon],
    tmbuff.tm_year + ((tmbuff.tm_year > 70) ? 1900 : 2000),
    tmbuff.tm_hour,
    tmbuff.tm_min,
    tmbuff.tm_sec);
  return buff;
}

}	// end of extern "C"

#if 0
void a1() { 	display("a1: asdbasdc");		}
void a2() { 	display("a2: asdbasdc");		}
void a3() { 	display("a3: asdbasdc");		}
void a4() { 	display("a4: asdbasdc");		}

typedef void (*PFI)();

struct {
  short left, right, up, down, help;
  PFI fcn;
  char *name;
} screens[] = {
    /*left      right   up      down    help    fcn     name*/
    { 0,        0,      0,      2,      0,      a1,      "m"},   /*1*/
    { 0,        4,      1,      3,      0,      a2,      "x"},   /*2*/
    { 0,        0,      2,      0,      0,      a3,      "x"},   /*3*/
    { 2,        0,      0,      0,      0,      a4,      "x"},   /*4*/
    { 0, 0, 0, 0, 0, 0}
};
int _ROOT_SCREEN_POINTER = 1;
#else
typedef void (*PFI)();

extern struct {
  short left, right, up, down, help;
  PFI fcn;
  char *name;
} screens[];

extern int _ROOT_SCREEN_POINTER;

extern char *dm;


#endif
int left(int id)
{
  if (screens[id].left)
    return screens[id].left;
  else if (screens[id].up)
    return left(screens[id].up-1);
  else
    return 0;     /* no left ! */
}

#define UP_ARROW	129
#define LEFT_ARROW      130
#define RIGHT_ARROW     131
#define DOWN_ARROW      128

void lcdshowdirections(int dir, int available)
{
  switch (dir) {
	case 1:			// up
	  ADucState->displayText[38] = available ? UP_ARROW : ' ';
	  break;
	case 2:			// left
	  ADucState->displayText2[39] = available ? LEFT_ARROW : ' ';
	  break;
	case 3:			// right
	  ADucState->displayText[39] = available ? RIGHT_ARROW : ' ';
	  break;
	case 4:			// down
	  ADucState->displayText2[38] = available ? DOWN_ARROW : ' ';
	  break;
  }
}

#define IDLE_STATE	0
#define ALARM_STATE	1
int state;
int alarmRow = 0;


int far _export PASCAL screenDriver(HWND ParentHWnd, HINSTANCE, PTDucState DucState, int screenPid)
{
  int x;
  static int prevScreenPid;

  hWnd = ParentHWnd;
  ADucState = DucState;
  if (screenPid == -1) {
	dm = (char *) calloc(1, 20000);
	screenPid =_ROOT_SCREEN_POINTER - 1;
	prevScreenPid = screenPid - 1;
	state = IDLE_STATE;
	helpFcn = DucState->helpFcn;
	return screenPid;
  }

  if (state == ALARM_STATE) {
	ADucState->cursor = 0;
	if (DucState->keyWasDown) {
	    DucState->keyWasDown = 0;
	    switch (DucState->keyCode) {
	      case KEY_DOWN:
              	alarmRow++;
		break;
	      case KEY_UP:
              	alarmRow--;
		break;
	      case KEY_ALARM:
		state = IDLE_STATE;
		break;
	    }
	}
	lcdcld();
	lcdshowdirections(1, 1);
	lcdshowdirections(2, 0);
        lcdshowdirections(3, 0);
	lcdshowdirections(4, 1);
	if (alarmRow == 0) {
		display("%2d okvitt., %2d kvitterade, %2d block,\n", 1, 0, 0);
		display("%2d A, %2d B, %2d C, %2d D larm", 1, 0, 0, 0); 
        } else {
		display("%c%c%c %02d,941214 13:29:35,941214 13:29:49\n",
			(alarmRow & 1 ? ' ' : (alarmRow & 2 ? '*' : 'b')),
								// kvitterat/blockerat: '*','b',' ',
			alarmRow & 1 ? 134 : 135,
			'A' + (alarmRow & 3),
                        alarmRow);
		display("Alarm-text bla bla bla");
	}
	return screenPid;
  } 

  if (DucState->keyWasDown) {
    DucState->keyWasDown = 0;
    switch (DucState->keyCode) {
      case KEY_CHANGE:
	DucState->keyWasDown = 1;
	break;
      case KEY_DOWN:
	if (x = screens[screenPid].down)
        	screenPid = x - 1;
	break;
      case KEY_UP:
	if (x = screens[screenPid].up)
        	screenPid = x - 1;
	break;
      case KEY_LEFT:
	if (x = left(screenPid))
        	screenPid = x - 1;
	break;
      case KEY_RIGHT:
	if (x = screens[screenPid].right)
        	screenPid = x - 1;
	break;
      case KEY_HELP:
	if (x = screens[screenPid].help) {
		static int returnScreen;
                if (x == -1)
			screenPid = returnScreen;
		else {
                	returnScreen = screenPid;
			screenPid = x - 1;
                }
	}
	break;
      case KEY_ALARM:
	alarmRow = 0;
	state = ALARM_STATE;
	break;
    }
  }

  if (screenPid != prevScreenPid) {
//            lcdinit();
	    lcdcld();
	    ADucState->cursor = 0;
	    prevScreenPid = screenPid;
	    lcdshowdirections(1, screens[screenPid].up);
	    lcdshowdirections(2, left(screenPid));
            lcdshowdirections(3, screens[screenPid].right);
            lcdshowdirections(4, screens[screenPid].down);
//	    timer = time(0);
  }
  lcdhome();
  (screens[screenPid].fcn)();
  return screenPid;
}

int FAR PASCAL LibMain(HINSTANCE hInstance, WORD /*wDataSeg*/,
  WORD /* cbHeapSize */, LPSTR lpCmdLine)
{
    int TheStatus;

    // Note that we can't ensure that DLLHelloLib is allocated
    // in memory owned by DLLHELLO.DLL.  Hence, it will get owned
    // by the first application that caused DLLHELLO.DLL to be
    // loaded.
#if 0
    DLLHelloLib = new TModule("DLLHello", hInstance, lpCmdLine);
    TheStatus = DLLHelloLib->Status;
    if ( TheStatus != 0 )
    {
      delete DLLHelloLib;
      DLLHelloLib = NULL;
    }
    return (TheStatus == 0);
#endif
    return 1;
}

int FAR PASCAL WEP ( int /*bSystemExit*/ )
{
    // don't delete DLLHelloLib here.  We haven't guaranteed that
    // DLLHelloLib points to memory owned by DLLHELLO.DLL.  It
    // will belong to the application that first caused DLLHELLO.DLL
    // to be loaded.  At the time WEP is called, that application,
    // and all of its memory, has been deleted.
    return 1;
}
