void read_and_display(int size)
{
    int arr[size];

    printf("Enter %d element\n",size);

    for (int i = 0; i < size; i++)  //read elements
        scanf("%d",&arr[i]);

printf("print array In reverse order :\n");
    for (int i=size-1 ; i>=0 ; i--)   ////display elements
    {
        printf("%d ",arr[i]);
    }
}
//  //rotate array logic 1
//  for(int i=0;i<(size/2) ;i++)
//  {
//     int temp=arr[i];
//     arr[i]=arr[(size-1)-i];
//     arr[(size-1)-i]=temp;
//  }  

// //rotate array logic 2
//  for(int i=0,j=size-1 ;i<j; i++,j--)
//  {
//     int temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
//  }  

//    printf("\nAfter reverse the array :\n");
//     for (int i = 0; i < size; i++)  
//         printf("%d ",arr[i]);


    
