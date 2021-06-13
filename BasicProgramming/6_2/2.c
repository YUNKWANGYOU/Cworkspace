#include <stdio.h>

//프로토타입 설정
void input_array(double *pa, int size);
void sort_array(double *pa, int size);

int main(){

  //변수(배열)선언
  double arr[5];
  //배열 크기
  int size = sizeof(arr)/sizeof(arr[0]);

//배열에 숫자를 넣어주는 함수
  input_array(arr,size);
  //버블정렬을 통해 배열을 정렬하는 함수
  sort_array(arr,size);

  printf("\n");
  //배열 출력
  for(int i= 0 ; i < size ; ++i){
    printf("%lf ",arr[i]);
  }
  printf("\n");

  return 0;

}

void input_array(double *pa, int size){
  //배열에 값을 입력해줌
  printf("5개의 실수값 입력: ");
  scanf("%lf %lf %lf %lf %lf",&pa[0],&pa[1],&pa[2],&pa[3],&pa[4]);

}
void sort_array(double *pa, int size){
    int temp;
    for (int i = 0; i < size; i++)    // 요소의 개수만큼 반복
    {
        for (int j = 0; j < size - 1; j++)   // 요소의 개수 - 1만큼 반복
        {
            if (pa[j] > pa[j + 1])          // 현재 요소의 값과 다음 요소의 값을 비교하여
            {                                 // 큰 값을
                temp = pa[j];
                pa[j] = pa[j + 1];
                pa[j + 1] = temp;            // 다음 요소로 보냄
            }
        }
    }
}
