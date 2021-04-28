#include <stdio.h>

int main(){
  int fruit = 2;

  switch(fruit){
    case 1 :
      printf("사과");
      break;
    case 2 :
      printf("배");
    case 3 :
      printf("바나나");
      break;
    default :
      printf("과일");
      break;
  }
}
