#include <stdio.h>

int main(){


  //변수 선언부
  int x;

  //변수 입력부
  printf("점수 입력: ");
  scanf("%d",&x);

  switch(x/10){
    //x가 100일 때 F출력되는 것 방지
    case 10 :
      printf("A\n");
      break;

    //x가 90점이상일때
    case 9 :
      printf("A\n");
      break;

    //x가 90점이상일때
    case 8 :
      printf("B\n");
      break;

    //x가 90점이상일때
    case 7 :
      printf("C\n");
      break;

    //x가 90점이상일때
    case 6 :
      printf("D\n");
      break;

    //나머지
    default :
      printf("F\n");
      break;
  }
}
