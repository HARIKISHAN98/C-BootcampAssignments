#include<stdio.h>
int main()
{
  int year;
  printf("Enter a year\n");
  scanf("%d",&year);

 int temp = year%100 ?  ( year%4 ? 0  : 1 ) : ( year%4 ? 0  : 1 ) ;

// year%4 ? printf("Not,leap year\n") : printf("Leap year\n");

if(temp ==0 )
printf("Not ,leap year");

else
printf("leap year");

    return 0;
}