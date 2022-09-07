#include<stdio.h>
int main()
{

int num;
  printf("Enter a number\n");
  scanf("%d",&num);

if(num%7 == 0 && num%3==0)
printf("\nDivisible by 3 and 7 both");

else if(num%7 == 0)  
printf("\nDivisible by 7");

else if(num%3==0)
printf("\nDivisible by 3");

else
printf("\nNot divisible by 3 or by 7 anyone");

    return 0;
}