#include<stdio.h>
int main()
{

int num,i;

printf("\nEnter a number\n");
scanf("%d",&num);

for ( i = num*2; i > 0; i-=2)
    printf("%d ",i);





    return 0;
}