#include <stdio.h>

int main(){
  //변수 선언부
  int x,y;
  //변수 입력부
  scanf("%d %d",&x,&y);

  //변수 조건 판단부
  if (x>0 && y>0)
    printf("제 1사분면\n");
  else if(x>0 && y<0)
    printf("제 4사분면\n");
  else if(x<0 && y>0)
    printf("제 2사분면\n");
  else//x<=0 && y<=0일 때
    printf("제 3사분면\n");

    return 0;
}
