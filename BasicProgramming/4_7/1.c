#include <stdio.h>

int main(){

  //변수선언부
  int x ;


  //변수입력부
  printf("임의의 정수 입력: ");
  scanf("%d",&x);

  //변수 조건 판단부
  if(x <= 95) //변수 x가 95보다 작거나 같으면 M 출력
    printf("M\n");
  else if(x<=100) //변수 x가 95보다 크고 100보다 작거나 같으면 L 출력
    printf("L\n");
  else
    printf("XL\n"); //변수 x가 101보다 크거나 같으면 XL출력

  return 0;
}
