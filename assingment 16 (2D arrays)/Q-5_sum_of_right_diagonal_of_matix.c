#include<stdio.h>
int main()
{
int size=3,a[size][size],sum=0;

printf("Enter the element in matrix -->\n");
for (int i = 0; i < size; i++)
{
    for (int j = 0; j < size; j++)
    {
        scanf("%d",&a[i][j]);
    }
}

for (int i = 0; i < size; i++)
{
    for (int j = 0; j < size; j++)
    {
        if(i+j==size-1)
        {
            sum=sum+a[i][j];
        }
    }
}
printf("Sum of right diagonal of a matrix is : %d\n",sum);

    return 0;
}