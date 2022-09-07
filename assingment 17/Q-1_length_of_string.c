#include<stdio.h>
int main()
{
char str[20],i;

printf("Enter your name\n");
// scanf("%s",str);
// gets(str);
fgets(str,20,stdin);

for( i=0;str[i];i++);

printf("Hello ,%s",str);
printf("\nLength : %d\n",i-1);

    return 0;
}