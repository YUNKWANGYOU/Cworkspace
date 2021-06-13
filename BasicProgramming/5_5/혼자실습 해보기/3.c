#include <stdio.h>

int is_multiple(int n, int m);

int main()
{
  int x,y;

  printf("첫번째 정수를 입력하시오:");
  scanf("%d",&x);
  printf("두번째 정수를 입력하시오:");
  scanf("%d",&y);

  if(is_multiple(x,y)){
    printf("%d는 %d의 배수입니다.\n",x,y);
  }
  else{
    printf("%d는 %d의 배수가 아닙니다.\n",x,y);
  }
  return 0;
}

int is_multiple(int n, int m){
  if(n%m == 0){
    return 1;
  }
  else{
    return 0;
  }
}
