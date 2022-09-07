#include<stdio.h>
#include<string.h>
int main()
{
char str[20],b[20];
int i,j;

printf("Enter your name\n");
fgets(str,20,stdin);

for(i=0,j=0 ;str[i];i++,j++)
{
 b[j]=str[i];
}
b[i]='\0';

// strcpy(b,str); //use string copy function

printf("%s",str);

    return 0;
}