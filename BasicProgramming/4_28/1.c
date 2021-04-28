#include <stdio.h>

char f(){
  // 문자 'A'반환
  return 'A';
}
int main(){
  // printf() 함수에서 f()함수의 반환값을 바로 출력해본다.
  printf("%c\n",f());
  return 0;
}
