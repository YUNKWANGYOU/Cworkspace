#include <stdio.h>

int sum(int x);
int main(){
  printf("%d\n",sum(10));
}

int sum(int x){
  int tmp;
  if(x>0){
    tmp = x + sum(x-1);
    return tmp;
  }
  else {
    return 0;
  }
}
