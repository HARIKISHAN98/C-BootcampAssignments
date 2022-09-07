#include<stdio.h>
int main()
{
int a[3][3],sum=0;

printf("Enter the element in matrix -->\n");
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        scanf("%d",&a[i][j]);
    }
    
}

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
       if(i==j)
       {
        sum=sum+a[i][j];
       }
    }
    
}

printf("Sum of left diagonal of matix is : %d\n",sum);

    return 0;
}