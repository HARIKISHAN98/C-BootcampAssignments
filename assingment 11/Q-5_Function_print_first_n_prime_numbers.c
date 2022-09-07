void print_N_prime(int num)
{
int k=2;
  while(num)
  {
    int i=2;
    for( ;i<k;i++)
    {
        if(k%i==0)
        break;
    }

    if(k==i)
    {
        printf("%d ",k);
        num--;
    }

    k++;
  }

}