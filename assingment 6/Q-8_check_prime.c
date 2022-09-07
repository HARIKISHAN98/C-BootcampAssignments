#include<stdio.h>
int main()
{

int num,i;
printf("\nEnter a number \n");
scanf("%d",&num);

if(num<2)
printf("Not prime\n");

for(i=2;i<num;i++)
{
    if(num%i==0)
    {
    printf("\nNot prime");
    break;
    }
}

if(i==num)
printf("\nPrime");
    return 0;
}