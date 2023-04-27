#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main(void)
{
int x; int y; int sum;

printf("두개의 정수를 입력하시오");
scanf("%d %d",&x,&y);

  sum = x + y;
  printf("두 수의 합은 %d",sum);


return 0;
}