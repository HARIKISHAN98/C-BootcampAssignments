#include<stdio.h>
int main()
{

int size=3,a[size][size];

printf("Enter elements in matrix\n");

for (int i = 0; i < size; i++)
    for (int j = 0; j < size; j++)
        scanf("%d",&a[i][j]);

 printf("After transpose of matrix :\n");   
for (int i = 0; i < size; i++)
 {   for (int j = 0; j < size; j++)
        printf("%d ",a[j][i]);

  printf("\n");
 }       

    return 0;
}