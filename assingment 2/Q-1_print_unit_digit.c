#include<stdio.h>
int main()
{
    int num,unit_digit;
printf("Enter a number\n");
scanf("%d",&num);
unit_digit=num%10;
printf("Unit digit is %d Of number %d\n",unit_digit,num);

    return 0;
}