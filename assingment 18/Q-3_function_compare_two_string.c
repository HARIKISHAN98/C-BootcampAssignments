int compare(char str_1[],char str_2[])
{
    int i = 0,j=0;
    while(str_1[i] && str_2[j])
    {
      if (str_1[i]!=str_2[j])
      {
        if(str_1[i]<str_2[j])
        return -1;

        else
        return 1;
      }
       i++,j++;
    }

    if (str_1[i]==str_2[j])
    {
       return 0;
    }

    else if(str_1[i]!=str_2[j])
    {
        if (str_1[i])
            return 1;

        else if(str_2[j])
            return -1;
    }
    
}