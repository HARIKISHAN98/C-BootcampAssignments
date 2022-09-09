#include<stdio.h>
void swap(int*,int*);
void swap(int *x,int *y)
{
   int temp=*x;
   *x=*y;
   *y=temp;

}
int main()
{
// int x=5;
// char m='A',*p=&x;
// printf("%d \n",x);
// printf("%p \n",&x);
// printf("%p \n",p);
// printf("%d \n",*p);

int x;
int *p=&x;

scanf("%d",p);
printf("%d",x);

// int a,b;
// printf("Enter two numbers\n");
// scanf("%d%d",&a,&b);
// //calling a swap function
// printf("Before swap\n");
// printf("a= %d ,b=%d\n",a,b);
// swap(&a,&b);
// printf("After swap\n");
// printf("a= %d ,b=%d\n",a,b);


    return 0;
}