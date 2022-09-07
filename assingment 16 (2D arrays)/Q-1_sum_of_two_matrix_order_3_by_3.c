#include<stdio.h>
int main()
{
int size=3,a[size][size],b[size][size];

printf("Enter the element in 1st matrix\n");
for (int i = 0; i < size; i++)
{
    for (int j = 0; j < size; j++)
    {
        scanf("%d",&a[i][j]);
    }
    
}

// printf("The element in 1st matrix\n");
// for (int i = 0; i < size; i++)
// {
//     for (int j = 0; j < size; j++)
//     {
//         printf("%d ",a[i][j]);
//     }
//     printf("\n");
// }

printf("Enter the element in 2nd matrix\n");
for (int i = 0; i < size; i++)
{
    for (int j = 0; j < size; j++)
    {
        scanf("%d",&b[i][j]);
    }
    
}

printf("sum is :\n");
for (int i = 0; i < size; i++)
{
    for (int j = 0; j < size; j++)
    {
        printf("%d ",a[i][j]+b[i][j]);
    }
    printf("\n");
}



    return 0;
}