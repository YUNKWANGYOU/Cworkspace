#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
  //변수 선언부
  int a[5][5];
  int i,j;
  int check[5] = {0,0,0,0,0};

//시간에 따라 다른 난수 발생되도록
  srand(time(NULL));
  for(i = 0 ; i < 5 ; i++){
    for(j = 0 ; j < 5 ; j++){
      //변수 입력부
      a[i][j] = rand()%10;
    }
  }

  for(i = 0 ; i < 5 ; i++){
    for(j = 0 ; j < 5 ; j++){
      //배열 출력
      printf("%d ",a[i][j]);
      if(a[i][j] == 0){
        //배열의 row중에서 0이 있는 row를 체크
        check[i] = 1;
      }
    }
    printf("\n");
  }
  printf("\n");
  for(i = 0 ; i < 5 ; i++){
    if (check[i] == 1){
      //0이 있는 row를 출력
      for(j = 0 ; j < 5 ; j++){
        printf("%d ",a[i][j]);
      }
      printf("\n");
    }

  }


}
