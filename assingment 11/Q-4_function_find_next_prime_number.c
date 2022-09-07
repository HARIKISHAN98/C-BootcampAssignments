int next_prime_number(int num)
{
    if(num<2)
    return 2;

    else
    {
    while(++num)
    {
        int i=2;
        for( ;i<num;i++)
        {
            if(num%i==0)
            break;
        }

        if(i==num)
        return num;
    }

    }
}