#include<stdio.h>
int main()
{
int num1,num2;
printf("Enter two number\n");
scanf("%d%d",&num1,&num2);
printf("Before swap\n");
printf("a=%d ,b=%d\n",num1,num2);

// num1=num1+num2;
// num2=num1-num2;
// num1=num1-num2;

/*
// num1=num1*num2;
// num2=num1/num2;
// num1=num1/num2;
*/

num1=num1^num2;
num2=num1^num2;
num1=num1^num2;

printf("After swap\n");
printf("a=%d ,b=%d\n",num1,num2);

    return 0;
}