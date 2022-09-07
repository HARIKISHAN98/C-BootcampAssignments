#include<stdio.h>
int main()
{
int num,sum=0,i;
printf("\nEnter a number\n");
scanf("%d",&num);

for(i=1;i<=num;i++)
sum=sum+i;

printf("\nSum : %d",sum);

    return 0;
}