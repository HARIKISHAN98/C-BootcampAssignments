int smaller_number_in_array(int arr[],int size)
{
    int temp,j;
    for(temp=0,j=1;j<size;j++)
    {
        if(arr[j]<arr[temp])
        temp=j;
    }

    return arr[temp];
}