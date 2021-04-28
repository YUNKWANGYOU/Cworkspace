#include <stdio.h>

int main(){

//변수선언부
  int x ;

//변수초기화
  x = 1;

//x가 10보다 커질때까지 +1하며 *5된값을 출력
  while(x<=10){
    printf("%d\n",x*5);
    x++;
  }

  return 0;
}
