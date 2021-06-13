#include <stdio.h>

//수 원형 선언
void bubble_sort(int arr[],int count);

int main(){
  //변수 선언
  int n;
  int i;

//변수 입력
  printf("n: ");
  scanf("%d",&n);

//변수 크기에 맞게 배열 선언
  int arr[n];

//배열에 값 입력
  for(i=0; i<n; i++){
    scanf("%d",&arr[i]);
  }

//배열을 정렬
  bubble_sort(arr,sizeof(arr)/sizeof(int));
//배열중 두 번째로 큰 수 출력
  printf("\n%d\n",arr[n-2]);

}

void bubble_sort(int arr[], int count)
{
  int temp;

  for (int i = 0; i < count; i++){    // 요소의 개수만큼 반복
    for (int j = 0; j < count - 1; j++){   // 요소의 개수 - 1만큼 반복
      if (arr[j] > arr[j + 1]){          // 현재 요소의 값과 다음 요소의 값을 비교하여 큰 값을
              temp = arr[j];
              arr[j] = arr[j + 1];
              arr[j + 1] = temp;            // 다음 요소로 보냄
      }
    }
  }
}
