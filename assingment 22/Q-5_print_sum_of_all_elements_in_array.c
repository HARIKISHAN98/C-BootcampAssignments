#include<stdlib.h>
#include<stdio.h>

int main()
{
    int *ptr ,size,sum=0;
    printf("Enter size of array : ");
    scanf("%d",&size);
    
    ptr =(int*) malloc(size * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }

    printf("Enter %d elements\n",size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    
    printf("sum is : %d\n",sum);  //sum of all elements of array

    free(ptr);

    return 0;
}