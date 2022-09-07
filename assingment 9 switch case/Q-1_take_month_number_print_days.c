#include<stdio.h>
int main()
{
    int num;
printf("Enter a number\n");
scanf("%d",&num);

switch (num)
{
case 1:
    printf("In january : 31 days\n");
    break;

case 2:
    printf("In Febrauary : 29 days in  leap year otherwise 28\n");
    break;

case 3:
    printf("In March : 31 days\n");
    break;

case 4:
    printf("In April : 30 days\n");
    break;

case 5:
    printf("In May : 31 days\n");
    break;

case 6:
    printf("In June : 30 days\n");
    break;

case 7:
    printf("In July : 31 days\n");
    break;

case 8:
    printf("In August : 31 days\n");
    break;

case 9:
    printf("In September : 30 days\n");
    break;

case 10:
    printf("In October : 31 days\n");
    break;

case 11:
    printf("In November : 30 days\n");
    break;

case 12:
    printf("In December : 31 days\n");
    break;


default:
printf("Invalid\n");
}
    return 0;
}