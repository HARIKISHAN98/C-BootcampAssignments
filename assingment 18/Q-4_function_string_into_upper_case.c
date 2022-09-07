void upper_case(char str[])
{
    for (int i = 0; str[i]; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        str[i]=str[i]-32;
    }
    
}