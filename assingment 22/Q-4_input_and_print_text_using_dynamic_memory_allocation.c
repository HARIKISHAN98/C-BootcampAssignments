#include<stdio.h>
#include<stdlib.h>

int main()
{

char *str , c =0;
int i =0,j=1;
printf("Enter a string : ");
str = (char*) malloc(sizeof(char));
// scanf("%c",str);
// printf("You enter : %c",*str);

while(c!='\n')
{
    c = getc(stdin);
    j++;
    str = (char*) realloc(str ,j*sizeof(char));
    str[i]=c;
    i++;
}

str[i]='\0';

printf("You enter : %s",str);

free(str);


    return 0;
}