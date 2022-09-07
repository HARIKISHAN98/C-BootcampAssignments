#include<stdio.h>
int main()
{
char str[20],i,ch,count=0;

printf("Enter your name\n");
fgets(str,20,stdin);

printf("Enter character\n");
scanf("%c",&ch);

for( i=0;str[i];i++)
{
    if(str[i]==ch)
    count++;
}

printf("Occurence of %c : %d\n",ch,count);

    return 0;
}