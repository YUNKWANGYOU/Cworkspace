#include <stdio.h>

int main(){

  int x ;
  int cnt;

  scanf("%d",&x);
  cnt = 0 ;

  for (int i = 2 ; i < x ; i ++){
    if(x%i == 0){
      cnt+=1;
    }

    if(cnt>=2) break;
  }

  if(cnt>=2){
    printf("소수가 아닙니다.\n");
  }
  else{
    printf("소수입니다.\n");
  }
}
