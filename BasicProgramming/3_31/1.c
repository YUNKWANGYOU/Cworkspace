#include <stdio.h>

int main(){
  //변수 선언부
  int x,y;
  int max_value,min_value;

  //변수 입력부
  printf("임의의정수입력1 :");
  scanf("%d",&x);
  printf("임의의정수입력2 :");
  scanf("%d",&y);

  //x,y 중 큰 수를 max_value에, 작은 수를 min_value에 저장.
  max_value = (x>y)?x:y;
  min_value = (x<=y)?x:y;

  //계산하여 출력
  printf("몫은 %d 이고, 나머지는 %d 입니다.\n",max_value/min_value,max_value%min_value);


  return 0;
}
