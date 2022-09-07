#include<stdio.h>
#include<string.h>
int main()
{
char str[20],x;
int temp;
printf("Enter a string\n");
fgets(str,20,stdin);

for(int i=0;str[i];i++)
{
    temp=i;
    for(int j=i+1;str[j];j++)
    {
        if(str[j]<str[temp])
        temp=j;
    }
   if(temp!=i)
   {
     x=str[temp];
     str[temp]=str[i];
     str[i]=x;
   }

}

printf("After sort the string :");
printf("%s",str);

    return 0;
}