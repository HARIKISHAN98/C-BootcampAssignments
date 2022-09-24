// Dangling pointer : pointer points to memory location that has been deleted
#include<stdio.h>
#include<stdlib.h>


int main()
{
int *ptr;

ptr = (int*) malloc(sizeof(int));

scanf("%d",ptr);

printf("Before Free : %d\n",*ptr);

free(ptr);

printf("After Free : %d\n",*ptr);


    return 0;
}