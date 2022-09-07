#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int size=10,temp;
    // printf("Enter Size of array\n");
    // scanf("%d",&size);

    int arr[size];
    printf("Enter %d number\n",size);

    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);


    // for(int i=0,j=size-1;i<j;i++,j--)  //reverse array
    // {
    // temp=arr[i];              
    // arr[i]=arr[j];
    // arr[j]=temp;
    // }
   
    for(int i=size-1 ;i>=0;i--)      //print reverse order
    printf("%d ",arr[i]);

    //     for(int i=0;i<size;i++)
    // printf("%d ",arr[i]);
  
return 0;

}