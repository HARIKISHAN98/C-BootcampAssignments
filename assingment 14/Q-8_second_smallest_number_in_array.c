#include<stdio.h>
int main()
{
int arr[10],j,temp;

printf("Enter 10 numbers in array\n");

for(int i =0;i<10;i++)
 scanf("%d",&arr[i]);

for(int i=0;i<10;i++)
{
  temp=i;
  for(j=i+1;j<10;j++)
  {
    if(arr[j]<arr[temp])
    temp=j;
  }

  if(temp!=i)
  {
    arr[temp]=arr[temp]+arr[i];
    arr[i]=arr[temp]-arr[i];
    arr[temp]=arr[temp]-arr[i];
  }


}
printf("Second Smaller number : %d",arr[1]);









    return 0;
}