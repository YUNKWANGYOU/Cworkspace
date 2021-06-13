#include <stdio.h>
#include <string.h>

//프로토타입 선언
void bubbleSort(char arr[5][20],int n);

int main(){
  //변수 선언부
  char arr[5][20];
  int i;
  //문자열 입력부
  for(i = 0 ; i < 5 ; i++){
    printf("%d: ",i+1);
    scanf("%s",arr[i]);
  }

//문자열 BubbleSort로 정렬
  bubbleSort(arr,5);

//정렬된 문자열 출력
  printf("\n");
  for(i = 0 ; i < 5 ; i++){
    printf("%s\n",arr[i]);
  }
  printf("\n");
}

void bubbleSort(char arr[5][20], int n)
{
  char temp[20];
  int i,j;
  for ( i = 0; i <= n-1; i++){    // 요소의 개수만큼 반복
    for ( j = 0; j < n - i-1; ++j){   // 요소의 개수 - 1만큼 반복
      if (strcmp(arr[j],arr[j+1]) > 0){ // 현재 요소의 값과 다음 요소의 값을 비교하여 큰 값을
              strcpy(temp,arr[j]);
              strcpy(arr[j],arr[j+1]);
              strcpy(arr[j+1],temp);  // 다음 요소로 보냄
      }
    }
  }
}
