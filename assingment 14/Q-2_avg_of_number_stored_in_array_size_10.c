#include<stdio.h>
int main()
{
  int arr[10],sum=0;
  float avg;

  printf("Enter 10 numbers\n");
  for(int i=0;i<10;i++)
  {
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
  }

avg=sum/10.0;
printf("Average is : %f\n",avg);

    return 0;
}