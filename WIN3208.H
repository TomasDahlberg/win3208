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

#define SCREEN_UP	1
#define SCREEN_DOWN	2
#define SCREEN_LEFT	4
#define SCREEN_RIGHT	8


typedef TDucState *PTDucState;

