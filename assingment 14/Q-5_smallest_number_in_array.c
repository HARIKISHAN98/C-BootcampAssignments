#include<stdio.h>
int main()
{
    int arr[10],smaller;
    printf("Enter 10 number\n");

    for(int i=0;i<10;i++)
        scanf("%d",&arr[i]);

    smaller=arr[0];
     
    for(int i=0;i<10;i++)
     {  
         if(smaller>arr[i])
           smaller=arr[i];

     }      

    printf("smaller number is : %d\n",smaller);
    return 0;

}