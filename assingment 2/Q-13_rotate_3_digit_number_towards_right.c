#include<stdio.h>
int main()
{
int num,digit,ans;
printf("Enter a three digit number\n");
scanf("%d",&num);

printf("Actual Number : %d\n",num);

digit=num%10;
num=num/10;
ans=digit*1000+num;

printf("Result : %d",ans);
    return 0;
}