void swap_strings(char *p,char *q)
{
    char temp[20];

    for (int i = 0; i<20; i++)
      temp[i]=p[i];
    
    for (int i = 0; i<20; i++)
      p[i]=q[i];

    for (int i = 0; i<20; i++)
      q[i]=temp[i];

}