#include<stdio.h>
int main()
{
// char *ptr="kapil sharma ji ";
char str[20],*ptr=str;
printf("Enter a string\n");
fgets(str,20,stdin);
int i;
for ( i = 0; *(ptr+i); i++);
printf("Length is : %d\n",i);



    return 0;
}