#include <stdio.h>

#define AREA 3.3

int main(){

  //변수 선언부
  float x;
  //변수 입력
  printf("평수를 입력하시오:");
  scanf("%f",&x);
  //변수와 평당 제곱미터를 곱하여 출력 
  printf("%f평 = %fm^2\n",x,x*AREA);

  return 0;
}
