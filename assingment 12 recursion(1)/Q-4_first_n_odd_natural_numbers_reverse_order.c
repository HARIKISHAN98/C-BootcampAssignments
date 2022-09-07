void print_odd_reverse(int n)
{
    if(n<1)
    return ;

    printf("%d ",n*2-1);

    print_odd_reverse(n-1);
}