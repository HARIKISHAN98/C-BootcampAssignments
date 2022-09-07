// void sort(int [],int);
// void print_unique_element(int [],int );

void sort(int arr[],int size)
{

 printf("before sort :\n");
   for (int i = 0; i < size; i++)
    printf("%d ",arr[i]);

    for(int i=0,temp=0,smallest;i<size;i++)
    {
     smallest=arr[i];

    for (int j = i+1; j < size; j++)
    {
        if(smallest > arr[j])
        {
        smallest=arr[j];
        temp=j;
        }
    }

    int x=arr[temp];
    arr[temp]=arr[i];
    arr[i]=x;
    

    }

  printf("\nAfter sort :\n");
   for (int i = 0; i < size; i++)
    printf("%d ",arr[i]);
}



void print_unique_element(int arr[],int size)
{
  sort(arr,size);
  printf("After sort :\n");
   for (int i = 0; i < size; i++)
    printf("%d ",arr[i]);

int i;
  for ( i = 0; i < size-1; i++)
  {
    if(arr[i]!=arr[i+1])
    printf("%d ",arr[i]);
  }
  printf("%d ",arr[i]);
  
}