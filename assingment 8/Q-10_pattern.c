/*
1 2 3 4 5 6 7 

1 2 3 4 3 2 1  | 1
1 2 3   3 2 1  | 2
1 2       2 1  | 3
1           1  | 4

*/

#include<stdio.h>
int main()
{
int num,k;
printf("Enter a number\n");
scanf("%d",&num);

for(int i=1;i<=(num/2+1) ;i++)
{
    k=1;
     for(int j=1;j<=num ;j++)
     {
        if(j<=(num/2+2)-i  || j>=(num/2)+i )
        {
            printf("%d ",k);
         if(j<=(num/2)+1-i)
         k++;

         if(j>=(num/2)+i)
         k--;
        }    

        else
        printf("  ");

     }
     printf("\n");
}

    return 0;
}