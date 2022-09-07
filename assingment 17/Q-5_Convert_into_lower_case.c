#include<stdio.h>
int main()
{
char str[20],i;

printf("Enter your name\n");
fgets(str,20,stdin);

printf("\nBefor convert -->%s",str);

for(i=0;str[i];i++)
{
    if(str[i] >='A' && str[i] <='Z')
    str[i]=str[i]+32;
}

printf("\nAfter convert -->%s",str);
    return 0;
}