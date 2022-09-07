#include<stdio.h>
#include<string.h>
// option 1 (Not using any predfined string function)
/*
int main()
{
char str[20];
int i,j,k;

printf("Enter your name\n");
fgets(str,20,stdin);

for( k=0;str[k];k++);

printf("\nBefor Reverse -->%s",str);

for(i=0,j=k-1 ; i<j ; i++,j--)
{
  str[i]=str[i]+str[j];
  str[j]=str[i]-str[j];
  str[i]=str[i]-str[j];
}

printf("\nAfter Reverse :%s",str);


    return 0;
}

*/

// option 2 (using  predfined string function)

int main()
{
char str[20];
int i,j;

printf("Enter your name\n");
fgets(str,20,stdin);


printf("\nBefor Reverse -->%s",str);

for(i=0,j=strlen(str)-1 ; i<j ; i++,j--)
{
  str[i]=str[i]+str[j];
  str[j]=str[i]-str[j];
  str[i]=str[i]-str[j];
}

// strrev(str);

printf("\nAfter Reverse :%s",str);


    return 0;
}