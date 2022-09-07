#include<stdio.h>
int main()
{
int num,i;
printf("Prime number under 100 is :\n");
for(num=2 ; num<=100 ; num++)
{

    for(i=2;i<num ;i++)
       if(num%i==0)
       break;

    if(num==i)
    printf("%d ",num);

}

    return 0;
}