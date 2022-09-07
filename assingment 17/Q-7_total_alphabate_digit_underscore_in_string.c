#include<stdio.h>
int main()
{
char str[20];
int i,alphabet=0,digit=0,special_charcters=0;

printf("Enter your name\n");
fgets(str,20,stdin);

for(i=0 ;str[i];i++)
{
 if(str[i] >='a' && str[i]<='z' || str[i] >='A' && str[i]<='Z')
 alphabet++;

 else if(str[i]>='0' && str[i]<='9')
 digit++;

 else
 special_charcters++;

}

printf("In %s",str);
printf("Alphabets = %d\nDigit =%d\nSpecial character =%d\n",alphabet,digit,special_charcters);

    return 0;
}