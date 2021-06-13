#include <stdio.h>

int gcd(int a, int b);

int main(){
    printf("%d\n",gcd(30,20));
}

int gcd(int a, int b){
  if (b == 0 ){
    return a;
  }
  else{
    return gcd(b,a%b);
  }
}
