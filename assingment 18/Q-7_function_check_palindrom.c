int check_palindrom(char str[]){


for( int i=0,j=str_len(str)-1 ; i<j ; i++,j--)
{
  if(str[i]!=str[j])
  return 0;

}

return 1;


}