#include <stdio.h>

void plus(int x, int y)
{
  printf("A+B=%d\n",x+y);
}

void minus(int x, int y)
{
  printf("A-B=%d\n",x-y);
}

void multi(int x, int y)
{
  printf("A*B=%d\n",x*y);
}

void div(int x, int y)
{
  printf("A/B=%d\n",x/y);
}

void percent(int x, int y)
{
  printf("AB=%d\n",x%y);
}
int main()
{
  //변수 선언부
  int x;
  int y;
  //변수 입력
  printf("A,B입력:");
  scanf("%d %d",&x,&y);

  //x+y를 출력해주는 함수
  plus(x,y);
  //x-y를 출력해주는 함수
  minus(x,y);
  //x*y를 출력해주는 함수
  multi(x,y);
  //x/y를 출력해주는 함수
  div(x,y);
  //xy를 출력해주는 함수
  percent(x,y);

  return 0;
}
