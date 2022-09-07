void prime_factor(int);
void prime_factor(int num)
{
    printf("Prime facor of %d is :\n",num);

    if(num<2)
    printf("does not exist\n");

    for(int i=2 ; i<=num ; )
    {
        if(num%i==0)
        {
            printf("%d ",i);
            num/=i;
        }

        else
        i++;
    }
}