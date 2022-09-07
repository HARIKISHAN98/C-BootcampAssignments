char* reverse_string(char str[])
{
    int j=str_len(str)-1;
    for (int i = 0; i < j; i++,j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    return str;
}