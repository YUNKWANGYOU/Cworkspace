#include <stdio.h>

int main(){
  //변수 선언부
  int num1,num2;

  //변수 입력부
  scanf("%d %d",&num1,&num2);

  //조건 판단부
  //num1이 양수일때

  if(num1 > 0){
    //num2이 양수이면
    if(num2 > 0){
      printf("양수\n");
    }
    //num2이 음수이면
    else{
      printf("음수\n");
    }
  }

  //num1이 음수일때
  else{
    //num2이 양수이면
    if(num2 > 0){
      printf("음수\n");
    }
    //num2이 음수이면
    else{
      printf("양수\n");
    }
  }
  return 0;
}
