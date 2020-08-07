#ifndef SPECIAL_ATTRIBUTES_H_INCLUDED-->>
#define SPECIAL_ATTRIBUTES_H_INCLUDED
#include <windows.h>
#include <conio.h>
#define  black bb
#define dark_blue db
#define dark_green dg
#define dark_cyan dc
#define dark_red dr
#define dark_magenta dm
#define dark_yellow dy
#define light_gray lgg
#define dark_gray dgg
#define light_blue lb
#define light_green lg
#define light_cyan lc
#define light_red lr
#define light_magenta lm
#define light_yellow ly
#define white ww
#define setbgcolor sbc
#define setfgcolor sfc
#define initial_fg_color ifc
#define initial_bg_color ibc
#define gotoxy gxy
namespace special_attributes
{
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
enum
  {
  black,
  dark_blue,
  dark_green,
  dark_cyan,
  dark_red,
  dark_magenta,
  dark_yellow,
  light_gray,
  dark_gray,
  light_blue,
  light_green,
  light_cyan,
  light_red,
  light_magenta,
  light_yellow,
  white
  };

int getcolors()
  {
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  GetConsoleScreenBufferInfo(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    &csbi
    );
  return csbi.wAttributes;
  }

int getfgcolor()
  {
  return getcolors() & 0x0F;
  }

int getbgcolor()
  {
  return getcolors() >> 4;
  }

void setfgcolor( int color )
  {
  SetConsoleTextAttribute(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    (getcolors() & 0xF0) | (color & 0x0F)
    );
  }

void setbgcolor( int color )
  {
  SetConsoleTextAttribute(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    ((color & 0x0F) << 4) | (getcolors() & 0x0F)
    );
  }

void setcolors( int fg, int bg )
  {
  SetConsoleTextAttribute(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    ((bg & 0x0F) << 4) | (fg & 0x0F)
    );
  }
}
#endif // SPECIAL_ATTRIBUTES_H_INCLUDED
