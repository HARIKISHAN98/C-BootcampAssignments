#include<stdio.h>
#include<string.h>
int main()
{
char str[20],*ptr;
ptr=str;
printf("Enter a string\n");
fgets(str,20,stdin);

int len;
for (len = 0; *(ptr+len); len++);

str[len-1]='\0';

for( ; len > 0 ; len--)
printf("%c",*(ptr+(len-1)));

return 0;
}