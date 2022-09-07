#include<stdio.h>
int main()
{
int num,sum=0,i;
printf("\nEnter a number\n");
scanf("%d",&num);

for(i=1;i< num+1;i++)
sum=sum+(i*2-1);

printf("\nSum : %d",sum);

    return 0;
}