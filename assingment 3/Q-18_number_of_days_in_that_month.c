#include<stdio.h>
int main()
{

int num;
  printf("Enter the Month number\n");
  scanf("%d",&num);

 if( num==1 || num > 2 && num < 6 || num > 6 && num <9 || num==10 || num==12 )
printf("\n31 days");

else if(num==6 || num==9 || num==11)
printf("\n30 days");

else if(num==2)
printf("\n28 days but 29 in leap year");

else
printf("\nInvalid Month number");

    return 0;
}