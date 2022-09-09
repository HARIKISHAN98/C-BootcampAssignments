#include<stdio.h>
int main()
{
int size=5,arr[size],*ptr=arr,sum=0;

printf("Enter %d element\n",size);

for (int i = 0; i < size; i++)
    scanf("%d",ptr+i);

printf("Elements in Reverse order\n");

// for (int i = size-1; i >=0; i--)
//     printf("%d ",*(ptr+i));

for ( ; size > 0; size--)
    printf("%d ",*(ptr+(size-1)));

return 0;
}