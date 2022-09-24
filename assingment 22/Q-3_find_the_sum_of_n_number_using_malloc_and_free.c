#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr ,size ,sum=0;
printf("How many number you want to add\n");
scanf("%d",&size);

ptr=(int*)malloc(size*sizeof(int));

if( ptr == NULL)
{
    printf("Memory allocation is failed\n");
    return 0;
}

printf("Enter the %d number you want to find their sum\n",size);
for (int i = 0; i < size; i++)
    scanf("%d",ptr+i);

for (int i = 0; i < size; i++)
    sum+=*(ptr+i);

printf("sum is : %d\n",sum);

free(ptr);  //to free up the memory space contain by ptr(pointer)

    return 0;
}