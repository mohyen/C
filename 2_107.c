#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)

{ 
double w;
double h;
double area; 
double perimeter;

  printf("너비를 입력하시오:");
  scanf("%lf",&w);
  printf("높이를 입력하시오:");
   scanf("%lf",&h);

area = w * h;
perimeter = 2 * (w + h);
 
printf("사각형의 넓이: %lf\n사각형의 둘레: %lf\n", area,perimeter);

return 0; 
}
