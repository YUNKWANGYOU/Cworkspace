#include <stdio.h>

void dec(int x)
{
  printf("10진법:");
  //변수 x를 10진법(%d)으로 출력한다.
  printf("%d\n",x);
}

void oct(int x)
{
  printf("8진법:");
  //변수 x를 8진법(%d)으로 출력한다.
  printf("%o\n",x);
}

void hex(int x)
{
  printf("16진법:");
  //변수 x를 16진법(%d)으로 출력한다.
  printf("%x\n",x);
}

int main()
{
  //변수 선언부
  int x;
  //변수 입력부
  scanf("%d",&x);

  //변수 x를 10진법으로 출력하는 함수에 변수 x를 매개변수로 넣어준다.
  dec(x);
  //변수 x를 8진법으로 출력하는 함수에 변수 x를 매개변수로 넣어준다.
  oct(x);
  //변수 x를 16진법으로 출력하는 함수에 변수 x를 매개변수로 넣어준다.
  hex(x);

  return 0 ;
}
