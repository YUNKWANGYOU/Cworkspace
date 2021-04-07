#include <stdio.h>
//PI를 선언
#define PI 3.14

int main(){

  //변수 선언부
  float r;
  float v,s;

  //변수 입력부
  printf("구의 표면적과 체적을 구합니다.\n구의 반지름 입력: ");
  scanf("%f",&r);

  //체적 계산 후 출력
  v=4*PI*r*r*r/3;
  printf("\n구의 체적은\t%.3f 입니다.",v);

  //표면적 계산 후 출력
  s=4*PI*r*r;
  printf("\n구의 표면적은\t%.3f 입니다.\n",s);

  return 0;
}
