#include<stdio.h>
int main()
{
    int arr[10],greater;
    printf("Enter 10 number\n");

    for(int i=0;i<10;i++)
        scanf("%d",&arr[i]);

    greater=arr[0];
     
    for(int i=0;i<10;i++)
     {  
         if(greater<arr[i])
           greater=arr[i];

     }      

    printf("Greater number is : %d\n",greater);
    return 0;
}