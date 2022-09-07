/*

A B C D C B A
  A B C B A
    A B A
      A

*/

#include<stdio.h>
int main()
{
int num;
char k;
printf("Enter a number\n");
scanf("%d",&num);

for(int i=1;i<=(num/2+1) ;i++)
{
    k='A';
    for(int j=1;j<=num ;j++)
    {
        if(j>=i && j<=num+1-i)
        {
        printf("%c ",k);

        if(j<(num/2)+1)
        k++;

        if(j>=(num/2)+1)
        k--;
        }

        else
        printf("  ");
    }
   printf("\n");
}

    return 0;
}