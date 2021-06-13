#include <stdio.h>

// 100의 자리 함수 원형 선언
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float div(int a, int b);

int main()
{
  // 변수 선언
  int command;
  int a,b;
  // 프로그램 시작
  printf("**********\n");
  printf("1: 덧셈\n");
  printf("2: 뺄셈\n");
  printf("3: 곱셈\n");
  printf("4: 나눗셈\n");
  printf("**********\n\n");

  // a,b입력부
  printf("a: ");
  scanf("%d",&a);
  printf("b: ");
  scanf("%d",&b);
  // 명령어 입력부
  printf("연산: ");
  scanf("%d",&command);

  switch(command){
    // 1번을 입력했을 때
    case 1:
    // add()함수가 반환하는 값 출력
      printf("%d\n",add(a,b));
      break;
    // 2번을 입력했을 때
    case 2:
    // sub()함수가 반환하는 값 출력
      printf("%d\n",sub(a,b));
      break;
    // 3번을 입력했을 때
    case 3:
    // mul()함수가 반환하는 값 출력
      printf("%d\n",mul(a,b));
      break;
    // 4번을 입력했을 때
    case 4:
    // 나누는 숫자가 0이면
      if(b==0){
        printf("error: b가 0입니다.\n");
      }
    // 0이아니면
      else{
    // div()함수가 반환하는 값 출력
        printf("%.3f\n",div(a,b));
      }
      break;

    default:
      printf("command를 제대로 입력해주세요.(1~4)");
      break;
  }

}

// 더하는 함수
int add(int a, int b){
  return a+b;
}
// 빼는 함수
int sub(int a, int b){
  return a-b;
}
// 곱하는 함수
int mul(int a, int b){
  return a*b;
}
// 나누는 함수
float div(int a, int b){
  return a/b;
}
