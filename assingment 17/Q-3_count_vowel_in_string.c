#include<stdio.h>
int main()
{
char str[20],i,count=0;

printf("Enter your name\n");
fgets(str,20,stdin);

for(i=0 ;str[i];i++)
{
    if(str[i]=='a'  || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E'  || str[i]=='I' || str[i]=='O' || str[i]=='U'  )
    count++;
}
printf("Hello ,%s\n",str);
printf("Vowel is : %d\n",count);
    return 0;
}