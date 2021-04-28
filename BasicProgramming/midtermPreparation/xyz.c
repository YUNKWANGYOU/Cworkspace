#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>

int main(void){
  int i,x,y,r,g,b;
  HDC hdc;
  hdc = GetWindowDC(GetForegroundWindow());
  srand((unsigned)time(NULL))

  for(i=0; i<10000 ; i++){
    x = rand()%300;
    y = rand()%300;
    r = rand()%256;
    g = rand()%256;
    b = rand()%256;
    SetPixel(hdc,x,y,RGB(r,g,b));
  }

  _getch();
  return 0;

}
