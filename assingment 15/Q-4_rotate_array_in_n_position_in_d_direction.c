void  rotate_array(int arr[],int size,int n,int d)
{
  if(d==0)       //for rotate array in left direction
   { 
     while (n--)
     {
      int i=0,temp=arr[i];
          for(; i<size-1;i++)
          {
            arr[i]=arr[i+1];
          }
       arr[i]=temp;
     }
   }  

else if(d==1)    //for rotate array in Right direction
{
    while(n--)
    {
    int i=0,temp=arr[size-1];
      for(;i<size-1;i++)
       { 
         arr[(size-1)-i]=arr[((size-1)-i)-(1)];
       }
    arr[(size-1)-(i)]=temp; 
    }
}
}