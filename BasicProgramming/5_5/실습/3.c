#include <stdio.h>

// 함수 원형 선언
int cal(int n);

int main()
{
// 변수 선언
  int N;
// 변수 입력
  scanf("%d",&N);

// cal()함수를 이용하여 한수 개수 반환
  printf("%d 개\n",cal(N));
}

int cal(int n){
  int i;
// 한수의 개수를 저장하는 변수 cnt
  int cnt = 0;
// 1~99는 수열이 존재하지 않으므로, 무조건 한수이다.
  if(n<=99){
    return n;
  }
//100 이상의 숫자는 수열이 존재하는데, 먼저 각 자리 수를 만들어준다.
  else {
    cnt=99;
    for(i=100;i<=n;i++){
// 1의자리 수
      int one = i%10;
// 10의자리 수
      int two = (i/10)-((i/100)*10);
// 100의 자리 수
      int three = i/100;
// 등차수열인지 판단.
      if((two-one) == (three-two)){
        cnt++;
      }
    }
  }
// 한수 개수 반환
  return cnt;
}
