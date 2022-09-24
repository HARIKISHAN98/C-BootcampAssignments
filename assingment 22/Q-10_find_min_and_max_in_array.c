#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr ,size;
  printf("Enter size of array : ");
  scanf("%d",&size);

 ptr = (int*) malloc(size * sizeof(int));

 if(ptr == NULL)
 {
    printf("Memory allocation failed\n");
    return 0;
 }

 printf("Enter %d elements\n",size);

 for (int i = 0; i < size; i++)
 {
    scanf("%d",ptr+i);
 }
 
 int max = ptr[0],min=ptr[0];
 
 for (int i = 0; i < size; i++)
 {
    if(min > *(ptr+i))
    min = *(ptr+i);

    if(max < *(ptr+i))
    max = *(ptr+i);
 }

 printf("Minimun Is : %d and Maximum Is : %d\n",min,max);

 free(ptr);
 

    return 0;
}