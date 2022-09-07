void print_natural_no_square(int n)
{
    if(n<1)
    return ;

    print_natural_no_square(n-1);

    printf("%d ",n*n);
}