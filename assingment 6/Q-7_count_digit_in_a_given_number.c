#include<stdio.h>
int main()
{
int i=0,num;
printf("\nEnter a number\n");
scanf("%d",&num);

while (num!=0)
{
    i++;
    num/=10;
}

printf("\nDigit : %d",i);
    return 0;
}