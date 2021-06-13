#include <stdio.h>

int main(){
  //변수 선언
  int num;
  int i;
  int avg=0;
  int cnt=0;
  float res;

//변수 입력
  printf("학생 수: ");
  scanf("%d",&num);
  //변수 크기에 맞게 배열 선언
  int score[num];

//배열에 값 입력
  printf("점수를 입력하시오.\n");
  for(i=0 ; i<num ; i++){
   scanf("%d",&score[i]);
  }

//평균을 구해줌
  for(i=0 ; i<num ; i++){
    avg+=score[i];
  }
  avg = avg/num;

//평균값보다 큰 점수들을 카운트
  for(i=0 ; i<num ; i++){
    if(score[i]>avg){
      cnt+=1;
    }
  }

//카운트/총 명수 * 100 출력
  res = (float)cnt*100/(float)num;
  printf("\n%.3f%%\n",res);

}
