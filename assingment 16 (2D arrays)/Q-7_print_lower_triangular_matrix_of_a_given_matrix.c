#include<stdio.h>
int main()
{
int size=3,a[size][size];

printf("Enter the elements in matrix -->\n");
for (int i = 0; i < size; i++)
{
    for (int j = 0; j < size; j++)
    {
        scanf("%d",&a[i][j]);
    }
}

printf("Lower triangular of given matrix is :\n");
for (int i = 0; i < size; i++)
{
    for (int j = 0; j < size; j++)
    {
        if(i>=j)
        printf("%d ",a[i][j]);

        else
        printf("0 ");
    }
    printf("\n");
}

    return 0;
}