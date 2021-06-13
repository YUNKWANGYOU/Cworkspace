#include <stdio.h>

int main(){

  char str1[6] = "Seoul";
  char str2[3] = "is";
  char str3[] = "the capital city of Korea";

  printf("%s %s %s\n",str1,str2,str3);

  printf("\n");

  char src[] = "The worst things to eat before you sleep";
  char dst[100];

  int i ;
  printf("%s\n",src);


  for (i = 0  ; src[i] != '\0' ; i++){
    dst[i] = src[i];
  }
  dst[i] = '\0';

  printf("%s\n",dst);
}
