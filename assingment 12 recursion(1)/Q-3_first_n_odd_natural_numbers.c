void print_odd_natural_number(int n)
{
    if(n==0)
    return ;

    print_odd_natural_number(n-1);

    printf("%d ",n*2-1);
}