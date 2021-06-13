#include <stdio.h>
#include <stdlib.h>

//프로토타입 설정
void swap(int *pa,int *py);
void get_sum_diff(int x,int y, int *p_add, int *p_sub);

int main(){

  //변수 선언부
  int a,b;
  printf("두 정수를 입력하세요. ");
  //변수 입력부
  scanf("%d %d",&a,&b  );
  //두 값을 교체하는 함수
  swap(&a,&b);
  printf("두 정수를 교환한 값은 : ");
  //교체한 값 출력
  printf("%d %d\n\n",a,b);

  int add,sub;
  //두 값의 합과 차를 알려주는 함수
  get_sum_diff(a,b,&add,&sub);
  //합 차 출력
  printf("두 정수를 교환한 후의 원소들의 합(add) = %d\n",add);
  printf("두 정수를 교환한 후의 원소들의 차(sub) = %d\n",sub);
  return 0;

}

//두 값을 바꿔주는 함수
void swap(int *pa,int *pb){
  int tmp;
  tmp = *pa;
  *pa = *pb;
  *pb = tmp;
}

//두 값의 합과 차를 연산해주는 함수
void get_sum_diff(int x,int y, int *p_add, int *p_sub){
  //합
  *p_add = x+y;
  //차이의 경우 절대값 처리해줌
  *p_sub = abs(x-y);
}
