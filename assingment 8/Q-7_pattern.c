/*

* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *

*/
#include<stdio.h>
int main()
{
int num;
printf("Enter an even number\n");
scanf("%d",&num);

for(int i=1;i<=num/2;i++)
{
    for(int j=1;j<=num ;j++)
        
        if(j<=(num/2+1)-i || j>=(num/2)+i)
        printf("* ");

        else
        printf("  ");
      
    printf("\n");
}

    return 0;
}