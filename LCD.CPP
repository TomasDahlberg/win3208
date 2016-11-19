#include <windows.h>

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <stdarg.h>
#include "win3208.h"

extern PTDucState ADucState; 

#if 0

  int i;
  for (i = 0; i < 40; i ++) {
    ADucState->displayText[i] = *s ? *s++ : ' ';
    ADucState->displayText2[i] = ' ';
  }
  ADucState->displayText[40] = 0;
  ADucState->displayText2[40] = 0;
}
#endif

extern "C" {

#define MAX_COLUMNS   38
#define MAX_LINES     2
#define WRAP              1
#define CACHE             1
#define CACHE_CURSOR      0

static int xPos, yPos;      /* 0..39,  0..1 */
static unsigned char line[MAX_LINES][MAX_COLUMNS];
static unsigned checkMap[MAX_LINES][MAX_COLUMNS];

static int changed = 0;

void lcdwr(char p)
{
  if (yPos == 0)
	ADucState->displayText[xPos] = p;
  else
	ADucState->displayText2[xPos] = p;
}

void lcdcld(void);
void lcdclr(void);
void lcdpos(int r, int c);
void lcdwrite(unsigned char c);
void lcdputs(unsigned char *s);
void lcdhome(void);

/*
! clear contents of display and positions cursor at (0,0)
*/
void lcdcld(void)
{
  for (yPos = 0; yPos < MAX_LINES; yPos++) {
    lcdpos(yPos, xPos = 0);
    for ( ; xPos < MAX_COLUMNS; xPos++)
      lcdwr(line[yPos][xPos] = checkMap[yPos][xPos] = ' ');
  }
  lcdpos(0,0);
}

/*
! clear rest of display and repositions cursor at current position !
*/
void lcdclr(void)
{
  int currentX, currentY;
  
  currentX = xPos;
  currentY = yPos;
  for (; yPos < MAX_LINES; yPos++) {
    lcdpos(yPos, xPos);
    for ( ; xPos < MAX_COLUMNS; xPos++)
      lcdwr(line[yPos][xPos] = ' ');
  }
  lcdpos(currentY, currentX);
}

void lcdhome(void)
{
  xPos = 0;
  yPos = 0;
  changed = 1;
}

void lcdpos(int r, int c)
{
  xPos = c;
  yPos = r;
  changed = 0;
}

void lcdwrite(unsigned char c)
{
/*
!   take care of control characters, such as formfeed and newline 
*/
  if (c == '\f') {
    lcdcld();         /* clear display */
    changed = 1;
    if (!CACHE_CURSOR)
      lcdpos(yPos, xPos);
    return;
  }
  if (c == '\n') {
    xPos = 0;
    yPos ++;
    changed = 1;
    if (yPos < MAX_LINES) {
      lcdpos(yPos, xPos);
      return;
    }
  }
  if (c == '\03') {
    lcdclr();
    return;
  }
/*
! retrench characters outside right margin if no wrap 
! otherwise continue at next line
*/

/*
  printf("\n(%d, %d) WRAP = %d, CACHE = %d, C = %d\n", xPos, yPos, WRAP, CACHE,
      CACHE_CURSOR);
*/

  if (xPos >= MAX_COLUMNS) {
    if (WRAP) {
     
/*  printf("wrap will now be performed:\n");  */
     
      xPos = 0;
      yPos ++;
      changed = 1;
      if ((yPos < MAX_LINES) && (!CACHE_CURSOR))
        lcdpos(yPos, xPos);
    } else
      return ;
  }
/*
!   scroll !!
*/
  if (yPos >= MAX_LINES) {
    for (yPos = 0, xPos = 0; xPos < MAX_COLUMNS; xPos++)
      if (line[0][xPos] != line[1][xPos]) {
        if (changed) {
          lcdpos(yPos, xPos);
        }
        lcdwr(line[0][xPos] = line[1][xPos]);
      } else
        changed = 1;
    for (yPos = 1, xPos = 0; xPos < MAX_COLUMNS; xPos++)
      if (line[1][xPos] != ' ') {
        if (changed) {
          lcdpos(yPos, xPos);
        }
        lcdwr(line[1][xPos] = ' '); xPos--;
      } else
        changed = 1;
    xPos = 0;
    lcdpos(yPos, xPos);
    if (c == '\n')
      return ;
  }
/*
! change strange character codes
*/
  if (c == '\06')
    c = 'å';                       
  else if (c == '\04')
    c = 'ä';
  else if (c == '\24')
    c = 'ö';
  else if (c == '\20')
    c = 'Å';
  else if (c == '\16')
    c = 'Ä';
  else if (c == '\31')
    c = 'Ö';
  else if (c == '\17')
    c = '°';
  else if (c == '\1')		// down arrow
    c = 0;
  else if (c == '\2')		// up arrow
    c = 1;
  else if (c == '\x08')		// high level
    c = 6;
  else if (c == '\x09')		// low level
    c = 7;

/*
! if CACHE is being used, check if contents has changed
*/
  if (CACHE) {
    if (line[yPos][xPos] == c) {
      checkMap[yPos][xPos] = c;
      
      xPos ++;
      changed = 1;
      if (!CACHE_CURSOR && xPos < MAX_COLUMNS)
        lcdpos(yPos, xPos);
      return;
    }
    if (changed) {
      lcdpos(yPos, xPos);
    }
  }
  line[yPos][xPos] = c;           checkMap[yPos][xPos] = c;
  lcdwr(c);
  xPos ++;
  if (xPos >= MAX_COLUMNS) {
    xPos --;
    lcdpos(yPos, xPos);
    xPos ++;
  }
}

void lcdputs(unsigned char *s)
{
  while (*s)
    lcdwrite(*s++);
}

/*
int display(char *fmt, ...)
{
   va_list argptr;
   int cnt;

   va_start(argptr, fmt);
   cnt = vsprintf(buffer, fmt, argptr);
   va_end(argptr);

   return(cnt);
}
*/

void display(char *stf, ...)
{
  char *p, line[80], *fmtPek, fmt[40], *sval;
  int ival, offset, width;
  double dval;

  va_list ap;
  va_start(ap, stf);
  

//  stf = va_arg(ap, char *);
  for (p = stf; *p; p++) {
    if (*p != '%') {
      lcdwrite(*p);
      continue;
    }
    ++p;
    fmtPek = fmt;
    *fmtPek++ = '%';
    while (isdigit(*p) || *p == '.' || *p == '-')
      *fmtPek++ = *p++;
    *fmtPek++ = *p;
    *fmtPek = '\0';   
   
    switch (*p) {
      case 'a':
        ival = va_arg(ap, int);
        --fmtPek;
        *fmtPek = '\0';  
        fmtPek = fmt; fmtPek ++;
        offset = 0;
        width = 8;
        if (*fmtPek) {
          width = atoi(fmtPek);
          while (*fmtPek && *fmtPek != '.')
            fmtPek++;
          if (*fmtPek) {
            offset = width;
            fmtPek++;
            width = atoi(fmtPek);
          }
        }
        line[0] = '\0';
        ival >>= offset;
        line[width] = '\0';
        while (width ) {
          line[--width] = (ival & 1) ? '\2' : '\1';
          ival >>= 1;
        }
        lcdputs(line);
        break;
      case 'c':
        ival = va_arg(ap, int);
        sprintf(line, fmt, ival);
        lcdputs(line);
        break;
      case 'd':
        ival = va_arg(ap, int);
        sprintf(line, fmt, ival);
        lcdputs(line);
        break;
      case 'x':
        ival = va_arg(ap, int);
        sprintf(line, fmt, ival);
        lcdputs(line);
        break;
      case 'f':
        dval = va_arg(ap, double);
        sprintf(line, fmt, dval);
        lcdputs(line);
        break;
      case 'g':
        dval = va_arg(ap, double);
        sprintf(line, fmt, dval);
        lcdputs(line);
        break;
      case 's':
        sval = va_arg(ap, char *);
	sprintf(line, fmt, sval);
	lcdputs(line);
	break;
      default:
        lcdwrite(*p);
        break;
    }
  }
  va_end(ap);
  return;
} 



}