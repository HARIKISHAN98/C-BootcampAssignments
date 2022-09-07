#include<stdio.h>
int main()
{
int size=3,a[size][size];


printf("Enter the elements in matrix -->\n");
for (int row = 0; row < size; row++)
{
    for (int col = 0; col < size; col++)
    {
        scanf("%d",&a[row][col]);
    }
}

int count_1,last_counts=0,maxi=0;
for (int row = 0; row < size; row++)
{
    count_1=0;
    for (int col = 0; col < size; col++)
    {
        if(a[row][col]==1)
        count_1++;
    }

    if(count_1 > last_counts)
    {
      maxi=row;
      last_counts=count_1;
    }
}

printf("Maximum number of 1's in : %d row no.\n",maxi);


    return 0;
}