#include<stdio.h>
int main()
{
int num1,num2,temp=1,i=2;
printf("Enter two number\n");
scanf("%d%d",&num1,&num2);

if(num1<0)  //for doing first term negative to positive
num1=-num1;

if(num2<0)   //for doing second term negative to positive
num2=-num2;

if(num1 ==0 && num2==0)
printf("HCF : Undefined\n");

else if(num1 ==0)
printf("LCM : %d\n",num2);

else if(num2 ==0)
printf("LCM : %d\n",num1);

else if(num1==1 || num2==1)      //if any term is 1 then ans is other term
printf("HCM : 1\n");

else
{
  while(i<12)
    if(num1%i==0 && num2%i==0)
    {
        temp=temp*i;
        num1=num1/i;
        num2=num2/i;
    }

    else
    i++;

printf("HCF : %d\n",temp);
}

    return 0;
}