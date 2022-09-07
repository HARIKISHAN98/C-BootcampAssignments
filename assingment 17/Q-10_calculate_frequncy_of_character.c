#include<stdio.h>
int main()
{
char str[20],x;
int temp;
printf("Enter a string :");
fgets(str,20,stdin);

printf("In ,");
for(int i=0;str[i];i++)
printf("%c",str[i]);

// for(int i=0;str[i];i++)
// {
//     temp=i;
//     for(int j=i+1 ;str[j] ;j++)
//     {
//         if(str[j]<str[temp])
//         temp=j;
//     }

//     if(temp!=i)
//     {
//        x=str[temp];
//        str[temp]=str[i];
//        str[i]=x;
//     }
// }
// printf("In ,");
// for(int i=0;str[i];i++)
// printf("%c",str[i]);

char temp_1;
int count;

for(int i=0;str[i];)
{
  temp_1=str[i];
  count=0;
  for(int j=i ;str[j];j++)
  {
    if(str[j]==temp_1)
      count++;
  }
  printf("%c occure %d times\n",temp_1,count);

 while(temp_1==str[i])
 i++;

}



    return 0;
}