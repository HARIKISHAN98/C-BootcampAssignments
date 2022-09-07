#include<stdio.h>
int main()
{
int num;
printf("Enter week number\n");
scanf("%d",&num);

switch(num)
{
    case 1:
        printf("Hello, Today is monday");
        break;

    case 2:
        printf("Hello, Today is Tuesday");
        break;

    case 3:
        printf("Hello, Today is Wednesday");
        break;

    case 4:
        printf("Hello, Today is Thursday");
        break;
        
    case 5:
        printf("Hello, Today is Friday");
        break; 

    case 6:
        printf("Hello, Today is Saturday");
        break;

    case 7:
        printf("Hello, Today is Sunday");
        break;       

    default :
    printf("Invalid case\n");               
}


    return 0;
}