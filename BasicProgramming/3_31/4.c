#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

  //변수 선언부
  int x,y;
  int res;

  //변계속해서 다른 랜덤값이 나올 수 있도록
  srand(time(NULL));

  //변수 입력부
  x = rand()%100;
  y = rand()%100;

  //더한 값이 맞으면 정답! 틀리면 오답.. 출력하도록 조건연산자 작성
  printf("1. %d + %d = ",x,y);
  scanf("%d",&res);
  printf("%s\n", res == x+y ? "정답!" : "오답..");

  //뺀 값이 맞으면 정답! 틀리면 오답.. 출력하도록 조건연산자 작성
  printf("2. %d - %d = ",x,y);
  scanf("%d",&res);
  printf("%s\n", res == x-y ? "정답!" : "오답..");

  //곱한 값이 맞으면 정답! 틀리면 오답.. 출력하도록 조건연산자 작성
  printf("3. %d * %d = ",x,y);
  scanf("%d",&res);
  printf("%s\n", res == x*y ? "정답!" : "오답..");
}
