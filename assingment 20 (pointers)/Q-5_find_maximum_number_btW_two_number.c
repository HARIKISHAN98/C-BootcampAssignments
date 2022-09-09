#include<stdio.h>
int main()
{
int num1,num2,*p=&num1,*q=&num2;
printf("Enter two number\n");
scanf("%d%d",&num1,&num2);

if(*p > *q)
printf("%d is greater\n",*p);

else
printf("%d is greater\n",*q);


    return 0;
}