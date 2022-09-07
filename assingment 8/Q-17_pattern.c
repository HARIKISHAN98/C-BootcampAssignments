/*
for num=9 ans is :

* * * * * * * * * 
  *           *   
    *       *     
      *   *       
        *

*/

#include<stdio.h>
int main()
{

int num;
printf("Enter an odd number\n");
scanf("%d",&num);

for(int i=1;i<=num ;i++)
printf("* ");

printf("\n");

for(int i=2;i<=(num/2)+1 ;i++)
{
    for(int j=1;j<=num ;j++)
    {
        if(j==i || j==num+1-i)
        printf("* ");

        else
        printf("  ");
    }
    printf("\n");
}

    return 0;
}