#include <stdio.h>

void f(int n){
  int i,j;
  for(i = n ; i > 0 ; i--){
    //9 8 7 ... 3 2 1 개의 공백출력
    for (j = 1 ; j <=i ; j++){
      printf(" ");
    }
    //0 1 2 ... 7 8 개의 '*'출력
    for (j = n-1 ; j >=i ; j--){
      printf("*");
    }
    //1 2 3 ... 7 8 9 개의 '*' 출력
    for (j = n ; j >=i ; j--){
      printf("*");
    }
    //8 7 6 ... 2 1 0 개의 공백 출력
    for (j = 0 ; j <i ; j++){
      printf(" ");
    }
    printf("\n");
  }
}
int main(){
  //변수 선언부
  int n;
  printf("정수 입력: ");
  //변수 입력부
  scanf("%d",&n);
  //별찍는함수실행
  f(n);

  return 0;
}
