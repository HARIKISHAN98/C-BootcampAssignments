#include<stdio.h>
int main()
{
int num;
printf("Enter a number\n");
scanf("%d",&num);

switch (num)
{
case 1:
    printf("Good\n");
    break;

case 2:
    printf("better\n");
    break;

case 3:
    printf("best\n");
    break;        

default:
    printf("Invalid\n");
}

    return 0;
}