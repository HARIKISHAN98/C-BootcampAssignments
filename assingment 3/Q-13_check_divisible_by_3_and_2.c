#include<stdio.h>
int main()
{

int num;
  printf("Enter a number\n");
  scanf("%d",&num);

if(num&1)  
 num%3 ? printf("\n Not divide by 2 and 3 both") : printf("\nDivide by 3 but not 2");
 
else 
 num%3 ?  printf("\nDivide by 2 but not 3") : printf("\nDivide by 2 and 3 both");

    return 0;
}