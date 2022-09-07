/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

*/

#include<stdio.h>
int main()
{
int num,k;
printf("Enter an odd number\n");
scanf("%d",&num);

for(int i=1 ; i<=num/2+1 ; i++)
{
    k=1;
    for(int j=1 ;j<=num ;j++)
     {
        if(j>=(num/2+2)-i && j<=num/2+i)
        {
        printf("%d ",k);
        if(j<(num/2+1))
        k++;
        }

        else
        printf("  ");


        if(j>=(num/2+1))
        k--;
     
     }
 printf("\n");
}

return 0;
}