#include<stdio.h>
#include<stdlib.h>

int main()
{
  char *str ,c=0;
  int i = 0,j=1;
  str = (char*) malloc(sizeof(char));
  printf("Enter your Name : ");
  while(c!= '\n')
  {
    c=getc(stdin);
    j++;
    str = (char*) realloc(str , j * sizeof(char));
    str[i]=c;
    i++;
  }
  str[i]='\0';
  printf("Hello ,%s\n",str);

  free(str);

    return 0;
}