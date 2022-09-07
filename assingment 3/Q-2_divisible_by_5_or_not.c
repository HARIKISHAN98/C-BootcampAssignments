#include<stdio.h>
int main()
{
int num;
printf("Enter a number\n");
scanf("%d",&num);

if (num%5)
    printf("Not Divisible\n");

else
    printf("Divisible\n");



    return 0;
}