int check_number(int,int);

int check_number(int number,int digit)
{

if(number==0 && digit==0)
return 1;

for(  ; number!=0 ; number/=10 )
{
    int temp_dig=number%10;

    if(temp_dig == digit)
    return 1;
}

return 0;

}

