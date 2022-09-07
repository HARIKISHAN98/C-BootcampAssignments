void print_even_natural(int n)
{
    if(n<1)
    return ;

    print_even_natural(n-1);

    printf("%d ",n*2);
}