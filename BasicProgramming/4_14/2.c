#include <stdio.h>

int main(){

//변수선언부
  int x,n;

//변수초기화
  x = 1;
  printf("정수 입력: ");
  scanf("%d",&n);

//입력받은 n까지 계속 +1씩 커지도록
  while(x<=n){
    printf("%3.d",x);
    //한 줄에 다섯개씩 출력하기 위해 조건문 삽입
    if(x%5 == 0){
      printf("\n");
    }
    x++;
  }
  printf("\n");

  return 0;
}
