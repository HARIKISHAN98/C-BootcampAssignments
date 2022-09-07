#include<stdio.h>
int main()
{
  int arr[10],sum_odd=0,sum_even=0;

  printf("Enter 10 numbers\n");
  for(int i=0;i<10;i++)
  {
    scanf("%d",&arr[i]);
    
    if(arr[i]&1)
    sum_odd=sum_odd+arr[i];

    else
    sum_even=sum_even+arr[i];

  }

printf("Sum of Odd number is : %d\n",sum_odd);
printf("Sum of Even number is : %d\n",sum_even);


    return 0;
}