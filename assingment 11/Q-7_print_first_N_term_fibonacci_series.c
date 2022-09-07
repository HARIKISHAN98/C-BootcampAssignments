void print_fb_series(int num)
{
    printf("First %d Fibonacci series is :\n",num);
    int first=-1,second=1,third;

    while(num--)
    {
        third=first+second;
        printf("%d ",third);

        first=second;
        second=third;
    }
}