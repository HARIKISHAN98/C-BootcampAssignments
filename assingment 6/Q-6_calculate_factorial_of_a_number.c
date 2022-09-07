#include<stdio.h>
int main()
{
int num,fact=1,i;
printf("\nEnter a number to find Factorial\n");
scanf("%d",&num);

for(i=num;i>0;i--)
fact=fact*i;

printf("\nFactorial : %d",fact);
    return 0;
}