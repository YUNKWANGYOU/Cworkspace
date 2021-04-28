#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    //변수 선언부
    int user,com;
    int flag;
    flag = 0;
    srand(time(NULL));
    do
    {
      //게임이 시작되면 계속해서 변수 입력
        printf("YOU : ");
        scanf("%d",&user);
      //com에는 난수로 계속해서 초기화시켜줌
        com = rand()%3;

        if(com==0)
          printf("COM : 가위\n");
        else if(com==1)
          printf("COM : 바위\n");
        else
          printf("COM : 보\n");

      //승패를 판단하는 조건
        if(user == com){
          printf("비겼습니다!\n");
        }
        else{
          if(user == 0 && com == 1){
            //가위,바위
            printf("졌습니다!\n");
          }
          else if(user == 0 && com == 2){
            //가위,보
            printf("이겼습니다!\n");
            flag = 1;
          }
          else if(user == 1 && com == 0){
            //바위,가위
            printf("이겼습니다!\n");
            flag = 1;
          }
          else if(user == 1 && com == 2){
            //바위,보
            printf("졌습니다!\n");
          }
          else if(user == 2 && com == 0){
            //보,가위
            printf("졌습니다!\n");
          }
          else if(user == 2 && com == 1){
            //보,바위
            printf("이겼습니다!\n");
            flag = 1;
          }
        }
      printf("\n");
    } while (flag == 0);//flag가 1이되는순간 이겼다고 생각하고 게임은 종료된다.

    return 0;
}
