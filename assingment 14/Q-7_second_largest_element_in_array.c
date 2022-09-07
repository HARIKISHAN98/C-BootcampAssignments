#include<stdio.h>
#include<math.h>
int main()
{
    int arr[10],temp,j;
    printf("Enter 10 number\n");

    for(int i=0;i<10;i++)
    scanf("%d",&arr[i]);

    for(int i=0;i<10;i++)
    {
      temp=i;
     for( j=i+1;j<10;j++)
        if(arr[j]<arr[temp]) 
          temp=j;
       
      if(temp!=i)
      { 
   arr[temp]=arr[temp]+arr[i];
   arr[i]=arr[temp]-arr[i];
   arr[temp]=arr[temp]-arr[i];
      }
    }

printf("Second larger : %d\n",arr[j-2]);
return 0;

}