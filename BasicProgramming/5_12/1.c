#include <stdio.h>

//함수프로토타입 선언
int fibonacci(int n);

int main()
{
  //변수선언부
  int n ;
  printf("n: ");
  //변수입력부
  scanf("%d",&n);
  //fibonacci 재귀함수 실행하고 반환값출력
  printf("%d번째 피보나치수: %d\n",n,fibonacci(n));
  return 0;
}

int fibonacci(int n){
  //n이 0이면 0반환
  if(n==0){
    return 0;
  }
  //n이 1이면 1반환
  else if(n==1){
    return 1;
  }
  //아무것도 아니면 계속해서 재귀
  else{
    return fibonacci(n-1)+fibonacci(n-2);
  }
}
