#include<stdio.h>
int main()
{
int num,digit,result;
printf("Enter a number\n");
scanf("%d",&num);

printf("Enter a digit\n");
scanf("%d",&digit);


result=num*10+digit;

printf("Result : %d\n",result);
    return 0;
}