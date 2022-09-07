#include<stdio.h>
int main()
{
int size=3,a[size][size],sum_of_row,sum_of_col=0;

printf("Enter the elements in matrix -->\n");
for (int i = 0; i < size; i++)
{
    for (int j = 0; j < size; j++)
    {
        scanf("%d",&a[i][j]);
    }
    
}

for (int i = 0; i < size; i++)
{
    sum_of_row=0;
    for (int j = 0; j < size; j++)
    {
        sum_of_row=sum_of_row+a[i][j];
        // sum_of_col=sum_of_col+a[j][i];
    }
    printf("Sum of row : %d\n",sum_of_row);
    // printf("Sum of column : %d\n",sum_of_col);
}

printf("\n");
for (int i = 0; i < size; i++)
{
    sum_of_col=0;
    for (int j = 0; j < size; j++)
    {
        sum_of_col=sum_of_col+a[j][i];
    }
    printf("Sum of column : %d\n",sum_of_col);
}

    return 0;
}