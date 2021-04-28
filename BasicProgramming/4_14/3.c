#include <stdio.h>

int main(){

//변수선언부
  int i;
  int n;
  int sum;

//변수초기화
  printf("정수 입력: ");
  scanf("%d",&n);
  sum=0;


  for(i=1;i<=n;i++){
//합을 저장해놓는 변수 sum에 계속해서 2의배수를 더함
    if(i%2 == 0){
      printf("%3.d",i);
      sum+=i;
    }
//한 줄에 10개씩 출력하기 위해 조건문 삽입
    if(i%20 == 0){
      printf("\n");
    }
  }
// 결과출력부
  printf("\n");
  printf("1부터 %d까지 짝수의 누적 합계: %d\n",n,sum);

  return 0;
}
