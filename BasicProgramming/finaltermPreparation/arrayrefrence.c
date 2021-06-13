#include <stdio.h>

void bad(int arr[]);

int main(){

  int a[5] =  {0,0,0,0,0};

  bad(a);

  for(int i = 0 ; i < 5 ; i++){
    printf("%d ",a[i]);
  }
}


void bad(int *arr){

    for(int i = 0 ; i < 5 ; i ++){
      arr[i] = i+1;
    }
}
