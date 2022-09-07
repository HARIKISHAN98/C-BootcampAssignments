#include<stdio.h>
int main()
{
int num,digit,sum=0;
printf("Enter a three digit number\n");
scanf("%d",&num);

digit=num%10;
sum=sum+digit;
num=num/10;

digit=num%10;
sum=sum+digit;
num=num/10;

digit=num%10;
sum=sum+digit;
num=num/10;

printf("Sum is %d\n",sum);

    return 0;
}