#include<stdio.h>
int main()
{
int num1,num2,num3;
printf("Enter two numbers\n");
scanf("%d%d",&num1,&num2);
printf("a=%d ,b=%d\n",num1,num2);
num3=num1;
num1=num2;
num2=num3;
printf("After Swap:\n");
printf("a=%d ,b=%d",num1,num2);

    return 0;
}