#include <stdio.h>

int main()
{
// 변수 선언부
  int x;
  int ab = 0; // a :0, b:1;
  printf("돌의 개수를 입력하세요: ");
// 변수 입력
  scanf("%d",&x);

  do{
// 변수를 한 루프 동안 저장해놓을 임시공간 선언
    int tmp;
    if(ab==0){ //A차례일 때
      printf("A: ");
      // 변수 입력
      scanf("%d",&tmp);
      // tmp만큼 돌 개수 차감
      x-=tmp;
      //B차례일 때로 바꿔줌
      ab = 1;
    }else{ //B차례일 때
      printf("B: ");
      // 변수 입력
      scanf("%d",&tmp);
      // tmp만큼 돌 개수 차감
      x-=tmp;
      //A차례로 바꿔줌
      ab = 0;
    }
  }while(x>0);//돌의 개수가 0보다 작거나 같아질 때 게임 종료
  if(ab == 0){ //마지막 돌을 짚은 다음 차례가 A라면
    printf("A의 승리입니다.\n");
  }else{ //마지막 돌을 짚은 다음 차례가 B라면
    printf("B의 승리입니다.\n");
  }

  return 0;
}
