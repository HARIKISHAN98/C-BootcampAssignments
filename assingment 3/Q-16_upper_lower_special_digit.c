#include<stdio.h>
int main()
{

char ch;
  printf("Enter a character\n");
  scanf("%c",&ch);

if(ch >= 'a' && ch<='z')
printf("\nLowercase");

else if(ch >= 'A' && ch<='Z')
printf("\nUpperCase");

else 
ch >= '0' && ch<='9' ? printf("\nDigit") : printf("\nSpecial character");

    return 0;
}