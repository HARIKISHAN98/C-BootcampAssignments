#include<stdio.h>
int main()
{
int num,sum=0,i;
printf("\nEnter a number\n");
scanf("%d",&num);

for(i=1;i< num+1;i++)
sum=sum+(i*i*i);

printf("\nSum : %d",sum);

    return 0;
}