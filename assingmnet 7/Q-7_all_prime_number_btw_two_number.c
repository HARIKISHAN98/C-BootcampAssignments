#include<stdio.h>
int main()
{

int num1,num2,i,check=0;

printf("Enter two number\n");
scanf("%d%d",&num1,&num2);

if(num1<1 && num2 >2)
num1=1;

if(num1 <2 && num2<2)
printf("No prime number bTw %d and %d\n",num1,num2);

else if(num1 >0 && num2<3)
printf("prime number bTw %d and %d is:\n2",num1,num2);

else if(num1>num2)
printf("Invalid format\n");

else
 {
    while (++num1<num2)
    {
        for ( i = 2; i < num1; i++)
        {
            if(num1%i==0)
            break;
        }

        if(num1==i)
        {
        printf("%d ",num1);
        check=1;
        }
        
    }

    if(check==0)
    printf("No prime number exist\n");
 }


    return 0;
}