void lower_case(char str[])
{
    for (int i = 0; str[i]; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        str[i]=str[i]+32;
    }
    
}