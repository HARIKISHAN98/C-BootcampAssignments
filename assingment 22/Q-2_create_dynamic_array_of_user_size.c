#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr ,size ,sum = 0;
printf("Enter how many element you want to store in an aaray\n");
scanf("%d",&size);

ptr=(int*)calloc(size,sizeof(int));

if(ptr == NULL)
{
    printf("Memory allocation failed\n");
    return 0;
}

printf("Enter %d element\n",size);   //for enter the element in dynamic array
for (int i = 0; i < size; i++)
    scanf("%d",ptr+i);

for (int i = 0; i < size; i++)  //for find the sum
    sum+=*(ptr+i);

printf("average is : %d\n",sum/size);   //use to print the average of number

free(ptr);

    return 0;
}