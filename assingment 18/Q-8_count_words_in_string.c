int count_words(char str[])
{
    int i, count=0;
    for ( i = 0; str[i]; i++)
    {
        if(str[i] ==' ')
        count++;
    }

    if (str[i]=='\0')
    {
        count++;
    }
    return count;
    
}