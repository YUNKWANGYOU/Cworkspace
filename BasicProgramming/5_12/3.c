#include <stdio.h>

//수프로토타입 선언
void odd(int n);
void even(int n);

//전역변수 선언
int sum = 0;

int main()
{
  //변수 선언 및 입력
  int n;
  scanf("%d",&n);

//홀수합 함수 실행
  odd(n);
  //짝수합 함수 실행
  even(n);
//global변수 sum 출력
  printf("1부터 %d까지 정수의 합: %d\n",n,sum);
  return 0;
}

void odd(int n){

  int odd_sum = 0;

  int i = 1;
  for(i = 1 ; i <= n ; i++){
    if(i%2==0){
      continue;
    }
    //1부터 입력받은 n까지 2로나눴을 때 0인 것만 제외하고 다 더한다.
    odd_sum+=i;
    //전역변수 sum에도 n까지 2로나눴을 때 0인 것만 제외하고 다 더한다.
    sum+=i;
  }
//local변수 odd_sum 출력
  printf("1부터 %d까지 홀수의 합: %d\n",n,odd_sum);

}

void even(int n){

  int even_sum = 0;

  int i = 1;
  for(i = 1 ; i <= n ; i++){
    if(i%2==1){
      continue;
    }
    //1부터 입력받은 n까지 2로나눴을 때 1인 것만 제외하고 다 더한다.
    even_sum+=i;
    //전역변수 sum에도 n까지 2로나눴을 때 1인 것만 제외하고 다 더한다.
    sum+=i;
  }
//local변수 even_sum 출력
  printf("1부터 %d까지 짝수의 합: %d\n",n,even_sum);
}
