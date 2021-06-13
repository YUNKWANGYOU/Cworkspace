#include <stdio.h>

void bin(int x);

int main(){
  bin(8);
  return 0;
}
void bin(int x){
  if(x>0){
    bin(x/2);
    printf("%d",x%2);
  }
}
