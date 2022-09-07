int check_prime(int num)
{

   if(num<2)
   return 0;

   else
   {
    int i=2;
    for( ;i<num;i++)
    {
        if(num%i==0)
        return 0;
    }

    if(num==i)
    return 1;

   } 
}