/*
if num=9 then o/p-->
        *         
      *   *       
    *       *     
  *           *   
* * * * * * * * * 

*/

#include<stdio.h>
int main()
{
int num;
printf("Enter a number\n");
scanf("%d",&num);

for(int i=1;i<=num/2;i++)
{
    for(int j=1;j<=num-1;j++)
    {
        if(j==(num/2+2)-i || j== (num/2)+i)
        printf("* ");

        else
        printf("  ");
    }
    printf("\n");
}

for (int i = 1; i <=num; i++)
 printf("* ");


    return 0;
}