#include<stdio.h>
int main()
{
int num,without_last_digit;
printf("Enter a number\n");
scanf("%d",&num);
without_last_digit=num/10;
printf("Number without last digit is : %d \n Actual number : %d",without_last_digit,num);

    return 0;
}