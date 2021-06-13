#include <stdio.h>

int main(){
  //변수 선언
  int n;
  int i,j;

//변수 입력
  printf("몇 개의 숫자를 입력하시겠습니까? ");
  scanf("%d",&n);
  printf("숫자를 입력하시오.\n");

//변수 값에 따라 배열 크기 맞춰 선언해주고 배열 입력
  int arr[n];
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  printf("\n");
  //5줄 출력
  for(i=0;i<n;i++){
    //i번째줄이면 배열의 i번째값부터 출력하는데 OutOfIndex를 막기위해 예외처리하였음
    for(j=i;j<n+i;j++){
      if(j>=n){
        printf("%d ",arr[j-n]);
      }
      else{
        printf("%d ",arr[j]);
      }
    }
    //줄마다 줄바꿈 출력
    printf("\n");
  }
}
