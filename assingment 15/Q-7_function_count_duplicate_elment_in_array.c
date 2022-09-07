void sort(int arr[],int size)
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
int count_duplicate(int [],int);

int count_duplicate(int arr[],int size)
{
    sort(arr,size);  //sort array
 
    int count=0;
    for (int i = 0,j; i < size; i=j)
    {
        for ( j=i+1; j < size; j++)
        {
            if(arr[i]==arr[j])
            count++;

            else
            break;
        }
        
    }
    
    return count;

}