void print_natural_number(int num)
{
    if(num==0)
    return ;

    print_natural_number(num-1);

    printf("%d ",num);
}