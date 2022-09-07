#include<stdio.h>
int main()
{
int num;
printf("Enter a number\n");
scanf("%d",&num);

// approach - 1

// int last_digit=num%10;
// printf("You Enter : %d\nResult : %d\n",num,num-last_digit);

// approach-2
printf("You Enter : %d\n",num);
num=num/10;
printf("Result : %d\n",num*10);

    return 0;
}