void print_in_reverse(int n)
{
    if(n==0)      //base case
    return ;

    printf("%d ",n);  //recursive call 
    print_in_reverse(n-1);
}