#include<stdio.h>
#include<stdlib.h>
int main()
{
// int a=5,*p=NULL,*q;
// p= (int*)malloc(sizeof(int));
// *p=5;
// printf("In pointer : %d \n",*p);

// q=(int*)calloc(5,sizeof(int));
// *q=7;
// // *q+1=17;
// printf("In calloc : %d ",*q);
int *ptr,*q;
ptr=malloc(sizeof(int));
realloc(ptr,16);
    return 0;
}