/*

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/
#include<stdio.h>
int main()
{
int num;
printf("Enter an odd number\n");
scanf("%d",&num);

for(int i=1;i<=(num/2+1);i++)
{
    for(int j=1;j<=num;j++)
    {
        if(j>=(num/2+2)-i && j<=(num/2)+i)
        printf("* ");

        else
        printf("  ");
    }
    printf("\n");
}

    return 0;
}