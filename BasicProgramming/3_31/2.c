#include <stdio.h>

int main(){
  //변수 선언부
  int year;
  int flag;

  //변수 입력부
  printf("윤년이면 1 평년이면 0 출력\n연도입력 : ");
  scanf("%d",&year);

  //조건연산자를 이용한 윤년 판별기
  flag = year%4==0 && year%100!=0 || year%400 == 0?1:0;

  //출력부
  printf("입력한 %d년은 %d에 해당합니다.\n",year,flag);

  return 0;
}
