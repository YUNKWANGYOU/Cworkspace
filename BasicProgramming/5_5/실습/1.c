#include <stdio.h>

// 함수 원형 선언
int dayCnt(int a, int b, int v);

int main(){
  int A,B,V;
// 변수 입력부
  scanf("%d %d %d",&A,&B,&V);
// dayCnt() 함수 반환값 출력
  printf("%d 일\n",dayCnt(A,B,V));

  return 0;
}

int dayCnt(int a, int b, int v){
// 그날그날의 높이를 저장해놓는 공간
  int tmp = 0;
// 하루를 뜻함
  int cnt = 0;

  while(1){
// 낮에 a 만큼 올라감
    tmp+=a;
// 그날의 높이가 목표치보다 커질 때
    if(tmp >= v){
// 마지막 날을 더하고 whil loop를 빠져나간다.
      cnt++;
      break;
    }
// 그날의 높이가 목표치보다 작다면
    else {
// 밤에 b만큼 내려가고
      tmp-=b;
// 하루를 더해준다.
      cnt++;
    }
  }

// 반복문을 빠져나온 뒤 마지막 일 수를 반환한다.
  return cnt;
}
