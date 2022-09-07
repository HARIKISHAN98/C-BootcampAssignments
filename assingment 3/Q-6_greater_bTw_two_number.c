#include<stdio.h>
int main()
{
  int num1,num2;
  printf("Enter two number\n");
  scanf("%d%d",&num1,&num2);

  int temp = num1>=num2 ? num1  : num2;
  
  printf("%d is greater\n",temp);

    return 0;
}