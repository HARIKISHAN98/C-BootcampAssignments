int hcf(int num1,int num2)
{
    int temp=1;
    for(int i=2;i<12;)
    {
        if(num1%i==0 && num2%i==0)
        {
            num1/=i;
            num2/=i;
            temp*=i;
        }

        else
        i++;
    }

    return temp;
}