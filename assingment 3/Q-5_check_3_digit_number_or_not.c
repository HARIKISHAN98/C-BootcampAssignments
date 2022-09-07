#include<stdio.h>
int main()
{
int num;
printf("Enter a number\n");
scanf("%d",&num);

if(num>99 && num<1000)
printf("Yes,Three digit number\n");

else
printf("Not, a three digit number\n");



    return 0;
}