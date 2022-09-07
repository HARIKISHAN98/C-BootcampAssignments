#include<stdio.h>
int main()
{
int a,i;

printf("Enter a number\n");
scanf("%d",&a);

if(a<2)
printf("Prime number after %d is : 2\n",a);

else
{
printf("Prime number after %d is :",a);
while(++a>1)
{
    for(i=2 ;i<a ;i++)
    {
        if(a%i==0)
        break;
    }

    if(a==i)
    {
    printf("%d\n",a);
    break;
    }
}

}

    return 0;
}