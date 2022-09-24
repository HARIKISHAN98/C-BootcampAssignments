#include<stdio.h>
#include<stdlib.h>
int main()
{
  int size_in_bytes=0,*ptr;
  // printf("Enter size in bytes : ");
  // scanf("%d",&size_in_bytes);

  // ptr =  malloc(size_in_bytes);
  
  // if(ptr == NULL)
  // {
  //   printf("Memory allocation failed\n");
  //   return 0;
  // }

  *ptr=4;
  *(ptr-1)=5;
  *(ptr+2)=6;


  printf("IN : %d\n",*ptr);
  printf("IN : %d\n",*(ptr-1));
  printf("IN : %d\n",*(ptr+2));



  // printf("Enter elements : \n");

  // for (int i = 0; i < size_in_bytes; i++)
  // {
  //    scanf("%d",ptr+i);
  // }
  
  
  // for (int i = 0; i < size_in_bytes; i++)
  // {
  //    printf("%d ",*(ptr+i));
  // }
  
free(ptr);

    return 0;
}