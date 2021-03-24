#include <stdio.h>

int main(){
  //변수 선언부
  float US = 1129.50;
  float FEES = 0.0175;
  float KR;

  //변수 출력부
  printf("달러 환율 US = %.2f\n",US);
  printf("달러 구매 수수료율 FEES = %.4f\n",FEES);

  //변수 입력부
  printf("환전할 금액(한화):");
  scanf("%f",&KR);

  //환전은 원화를 달러환율로 나눠주고, 수수료는 원화에 수수료를 곱해주어 출력
  printf("환전 후 달러 금액: $%.2f\n",KR/US);
  printf("환전 수수료: ₩%.2f\n",KR*FEES);

  return 0;

}
