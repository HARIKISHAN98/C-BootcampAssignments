void reverse(int n)
{
    if(n<1)
    return ;

    printf("%d",n%10);

    reverse(n/10);
}