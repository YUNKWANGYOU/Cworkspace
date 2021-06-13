#include <stdio.h>

void sub(){
  static int scount = 0 ;

  int acount = 0;

  printf("scount = %d\t",scount);
  printf("acount = %d\n",acount);
  scount++;
  acount++;
}

int main(){
static int scount = 0;
  sub();sub();sub();sub();
printf("scount = %d\t",scount);
  return 0;
}
