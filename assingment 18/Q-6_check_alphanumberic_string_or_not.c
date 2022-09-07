int check_alphanumeric(char str[])
{
    for (int i = 0; str[i] ; i++)
    {
       if (str[i] >='a' && str[i]<='z' || str[i] >='A' && str[i]<='Z')
       {
         for (int j = i+1; str[j]; j++)
            if(str[i] >='0' && str[i]<='9')
            return 1;
         
       return 0;

       }
       
       
       else if (str[i] >='0' && str[i]<='9')
       {
         for (int j = i+1; str[j]; j++)
            if(str[i] >='a' && str[i]<='z' || str[i] >='A' && str[i]<='Z')
            return 1;
         
       return 0;
           
       } 
       
    }
    
}