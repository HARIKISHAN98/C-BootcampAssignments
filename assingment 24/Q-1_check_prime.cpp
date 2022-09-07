int check_prime(int num);
int check_prime(int num)
{
    int i;

    for(i=2; i < num ;i++)
      if(num%i==0)
        return 0;   

   if(num==i)
    return 1;

}