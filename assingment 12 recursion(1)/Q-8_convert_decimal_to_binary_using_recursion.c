void in_binary(int n)
{
    if(n<1)
    return ;

   in_binary(n>>1);
   printf("%d",n&1);

}