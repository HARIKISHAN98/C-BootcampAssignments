#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr , size;

printf("Enter size of array : ");
scanf("%d",&size);

ptr = (int*) malloc( size * sizeof(int));

if(ptr == NULL)
printf("Memory allocation failed\n");

printf("Enter %d element\n",size);

for (int i = 0; i < size; i++)
{
    scanf("%d",ptr+i);
}

int i=0,largest = *(ptr+i);

for ( i = 1; i < size; i++)
{
    if(largest < *(ptr+i))
    largest = *(ptr+i);
}

printf("largest is : %d\n",largest);

free(ptr);

    return 0;
}