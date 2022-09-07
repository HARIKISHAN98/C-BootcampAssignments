void prime_btw_2_number(int num1,int num2)
{
int check=0;
    while(++num1<num2)
    {
        int i=2;
        for( ;i<num1 ;i++)
            if(num1%i==0)
              break;

        if(num1==i)
          {
           printf("%d ",num1);
           check=1;
          }
    }

    if(check==0)
    printf("No prime numbers\n");
}