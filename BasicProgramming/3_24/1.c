#include <stdio.h>

int main(){

  //변수 선언부
  char x;

  //변수 입력부
  printf("알파벳 입력 : ");
  scanf("%c",&x);

  //그대로 출력
  printf("처음 입력한 알파벳 출력 : %c\n",x);
  //+5한 ASCII코드 출력
  printf("처음 알파벳에 5를 더한 알파벳 출력 : %c\n",x+5);
  //+5한 ASCII코드의 자리값 출력
  printf("변경된 알파벳의 아스키 코드값 : %d\n",x+5);

  return 0;
}
