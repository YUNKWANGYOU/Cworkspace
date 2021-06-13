#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

double cal_area(double radius);
double get_radius();

int main()
{
  double r ;
  r = get_radius();
  printf("원의 면적은 %.6f입니다.\n",cal_area(r));

  return 0;
}

double cal_area(double radius){
  return M_PI*radius*radius;
}
double get_radius(){
  double r ;
  printf("원의 반지름을 입력하시오:");
  scanf("%lf",&r);
  return r;
}
