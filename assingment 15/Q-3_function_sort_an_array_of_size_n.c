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

        if(temp!=i)
        {
        arr[temp]=arr[temp]+arr[i];
        arr[i]=arr[temp]-arr[i];
        arr[temp]=arr[temp]-arr[i];
        }
        
    }
    
    return arr;
}