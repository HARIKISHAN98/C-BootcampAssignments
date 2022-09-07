#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
// {
//     int arr[10],temp,size;
//     printf("How many number you want to enter in array of size 10\n");
//     scanf("%d",&size);

//     if(size > 10)
//     printf("You can't enter %d number array of 10 size\n",size);

//     else
//     {
//     printf("Enter %d number\n",size);


//     for(int i=0;i<size;i++)
//     scanf("%d",&arr[i]);



//     for(int i=0;i<size;i++)
//     {
//         temp=i;
//         for(int j=i+1 ;j<size ;j++)
//         {
//             if(arr[j] < arr[temp])
//                 temp=j;
            
//         }

//         if(temp!=i)
//         {
//        int x=arr[temp];
//        arr[temp]=arr[i];
//        arr[i]=x;
//         }
//     }

// printf("After Swap : \n");
// for(int i=0;i<size;i++)
//     printf("%d ",arr[i]);
//     }
// return 0;

// }

//approach 2 (just simple but as same as above )

{
    int arr[10],temp;
    
    printf("Enter 10 number\n");


    for(int i=0;i<10;i++)
    scanf("%d",&arr[i]);



    for(int i=0;i<10;i++)
    {
        temp=i;
        for(int j=i+1 ;j<10 ;j++)
        {
            if(arr[j] < arr[temp])
                temp=j;
            
        }

        if(temp!=i)
        {
       int x=arr[temp];
       arr[temp]=arr[i];
       arr[i]=x;
        }
    }

printf("After Swap : \n");
for(int i=0;i<10;i++)
    printf("%d ",arr[i]);
    
    return 0;

}