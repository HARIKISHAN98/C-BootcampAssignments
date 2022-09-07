int* sort(int arr[],int size)
{
  for (int i = 0; i < size; i++)
  {
    int temp=i;
    for (int j = i+1; j < size; j++)
    {
        if(arr[j]<arr[temp])
        temp=j;

    }
    int x=arr[i];
    arr[i]=arr[temp];
    arr[temp]=x;
  }
  
}

int count_frequency(int arr[],int size)
{
    sort(arr,size);

// printf("After sort :-->\n");
// for(int i=0;i<size;i++)
// printf("%d ",arr[i]);

    for (int i = 0,count,j; i < size; i=j)
    {
        count=0;
        for ( j = i; j < size; j++)
        {
            if(arr[i]==arr[j])
            count++;

            else
            break;
        }
        printf("%d : %d times\n",arr[i],count);
        
    }
    
}