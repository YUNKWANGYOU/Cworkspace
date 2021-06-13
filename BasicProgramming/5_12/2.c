#include <stdio.h>

//함수프로토타입 선언
void triangle(int n);
void square(int n);
void diagonal(int n);

int main(){
  //프로그램 시작 시 기본 출력문
  printf("1: 입력받은 정수를 높이로 갖는 이등변 삼각형 출력\n");
  printf("2: 입력받은 정수를 변으로 갖는 정사각형 출력\n");
  printf("3: 입력받은 정수만큼 대각선(/)으로 출력 출력\n\n");

//변수 선언 및 입력
  int num,cmd;
  scanf("%d %d",&num,&cmd);

  switch(cmd){
      //커맨드가 1일 때 삼각형출력
    case 1:
      triangle(num);
      break;
      //커맨드가 2일때 사각형출력
    case 2 :
      square(num);
      break;
      //커맨드가 3일때 대각선출력
    case 3 :
      diagonal(num);
      break;
  }

  return 0;
}

void triangle(int n){

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

void square(int n){

  int i,j;
//n 줄 만큼 \n출력
  for(i = 0 ; i < n; i++){
    //n 개 만큼 '*'출력
    for(j = 0 ; j < n ; j++){
      printf("*");
    }
    printf("\n");
  }
}

void diagonal(int n){

  int i,j;

  for(i = n ; i > 0 ; i--){
    //9 8 7 ... 3 2 1 개의 공백출력
    for (j = 1 ; j <=i ; j++){
      printf(" ");
    }
    //마지막에 별과 공백출력
    printf("*\n");
  }
}
