/*

* * * * *
* * * *
* * *
* *
*

*/
#include<stdio.h>
int main()
{
int num;
printf("Enter a number\n");
scanf("%d",&num);

for(int i=1;i<=num;i++)
{
    for(int j=1;j<=num;j++)
    {
        if(j<=num+1-i)
        printf("* ");

        else
        printf(" ");
    }
    printf("\n");
}

    return 0;
}