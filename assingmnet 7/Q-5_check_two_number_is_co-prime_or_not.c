#include<stdio.h>
int main()
{

int num1,num2,i=2;
printf("Enter two number\n");
scanf("%d%d",&num1,&num2);

if(num1==1 || num2==1)
printf("Co-prime\n");

else
{
    while(i<=11)
    {  if(num1%i==0 && num2%i==0)
        {
        printf("Not Co-prime\n");
        break;
        }  

        else
        i++;
    }

    if(i>11)
    printf("Co-prime\n");
}

    return 0;
}