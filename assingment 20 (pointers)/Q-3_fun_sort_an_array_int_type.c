void sort_array(int *ptr,int size)
{
   for (int i = 0; i < size; i++)
     for (int j = i+1; j < size; j++)
        if(ptr[j] < ptr[i])
        {
          ptr[i]=ptr[i]+ptr[j];
          ptr[j]=ptr[i]-ptr[j];
          ptr[i]=ptr[i]-ptr[j];
        }
}