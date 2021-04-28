#include <stdio.h>

void f(int n){
  int x = 1;
  while(x<=n){
    printf("%3.d",x);
    //한 줄에 다섯개씩 출력하기 위해 조건문 삽입
    if(x%5 == 0){
      printf("\n");
    }
    x++;
  }
  printf("\n");
}

int main() {
  //변수 선언부
  int n;
  printf("정수 입력: ");
  //변수 초기화
  scanf("%d",&n);
  f(n);
  return 0;
}
