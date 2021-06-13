#include <stdio.h>

int check_alpha(char x);

int main()
{
  char x;
  printf("문자를 입력하시오: ");
  scanf("%c",&x);

  if(check_alpha(x)){
    printf("%c는 알파벳 문자입니다.\n",x);
  }
  else{
    printf("%c는 알파벳 문자가 아닙니다.\n",x);
  }

  return 0;
}

int check_alpha(char x){
  if(x>='a' && x<='z'){
    return 1;
  }
  else{
    return 0;
  }
}
