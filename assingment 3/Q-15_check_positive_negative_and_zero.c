#include<stdio.h>
int main()
{

int num;
  printf("Enter a number\n");
  scanf("%d",&num);

num <0 ? printf("\nNegative") : num>0 ? printf("\nPositive") : printf("\nZero") ;

    return 0;
}