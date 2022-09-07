#include<stdio.h>
int main()
{
int f=-1,s=1,next=f+s,num;

printf("Enter a number\n");
scanf("%d",&num);

for( ; next<=num ;f=s,s=next,next=f+s)
{
    if(next == num)
    {
        printf("%d is in fibonacci series\n",num);
        break;
    }
}

if(next>num)
printf("%d is not in fibonacci series\n",num);


    return 0;
}