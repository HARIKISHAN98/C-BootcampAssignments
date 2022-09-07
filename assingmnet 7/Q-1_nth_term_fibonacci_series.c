#include<stdio.h>
int main()
{
// 0 1 1 2 3 5 8 13 21 34 55

int num,first=-1,second=1,next,i;
printf("\nEnter a number");
scanf("%d",&num);

for(i=1;i<=num;i++)
{
 next=first+second;
 first=second;
 second=next;
}

printf("\n%d term : %d",num,next);

    return 0;
}