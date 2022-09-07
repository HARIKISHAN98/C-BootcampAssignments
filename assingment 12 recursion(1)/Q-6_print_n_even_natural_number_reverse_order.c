void print_reverse_even_natural_(int n)
{
    if(n<1)
    return ;

    printf("%d ",n*2);

    print_reverse_even_natural_(n-1);
}