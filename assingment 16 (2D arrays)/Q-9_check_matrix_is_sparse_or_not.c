#include<stdio.h>
int main()
{
int size=3,a[size][size],count=0;

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
    for (int j = 0; j < size; j++)
    {
        if(a[i][j] == 0)
        count++;
    }
}

if((size*size)/2 < count)
printf("Matrix is Sparse\n");

else
printf("Matrix is not Sparse\n");



return 0;
}