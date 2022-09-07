#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int arr[10],brr[10];
    printf("Enter 10 number\n");

    for(int i=0;i<10;i++)   //enter element in first array
    scanf("%d",&arr[i]);

    for(int i=0;i<10;i++)    //copy element in 1st array to 2nd array
    brr[i]=arr[i];

    for(int i=0;i<10;i++)   //print element in 2nd array
    printf("%d ",brr[i]);

  
return 0;

}