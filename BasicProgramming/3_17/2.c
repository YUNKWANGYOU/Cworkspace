#include <stdio.h>

int main()
{
  //변수 선언부
  int x;
  int y;
  //변수 입력부
  printf("A,B입력:");
  scanf("%d %d",&x,&y);

  //x+y 출력
  printf("A+B=%d\n",x+y);
  //x-y 출력
  printf("A-B=%d\n",x-y);
  //x*y 출력
  printf("A*B=%d\n",x*y);
  //x/y 출력
  printf("A/B=%d\n",x/y);
  //x%y 출력
  printf("AB=%d\n",x%y);

  return 0;
}
