#include <stdio.h>

int main(){

  //변수 선언부
  int x = 3;
  int y = 5;
  int tmp;

  //변수 출력부
  printf("x=%d, y=%d\n",x,y);

  //x값을 tmp에 임시 저장했다가 다시 입력하여 swap 해준다.
  tmp = x;
  x = y;
  y = tmp;

  //변수 출력부
  printf("x=%d, y=%d\n",x,y);

  return 0;
}
