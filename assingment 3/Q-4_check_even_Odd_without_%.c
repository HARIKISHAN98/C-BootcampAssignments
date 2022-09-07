#include<stdio.h>
int main()
{
int num;
printf("Enter a number\n");
scanf("%d",&num);

//Approach 1
/*
int quetionet=num/5;
if (num==quetionet*2)
    printf("Even\n");

else
    printf("Odd\n");
*/

//approach 2
if(num&1)
printf("Odd\n");
else
printf("Even\n");

    return 0;
}