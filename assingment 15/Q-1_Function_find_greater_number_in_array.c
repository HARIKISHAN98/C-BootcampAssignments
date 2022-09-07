int Greater_number_in_array(int arr[],int size)
{
    int temp,j;
        for( temp=0,j=1;j<size;j++)
            if(arr[temp]<arr[j])
            temp=j;


        return arr[temp];
}