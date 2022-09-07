#include<stdio.h>
int power(int,int);

int power(int digit,int count)
{
int ans=1;
while (count!=0)
{
    ans=ans*digit;
    count--;
}
return ans;

}


int main()
{
int num,temp,count=0,digit,sum=0;

printf("Enter a number\n");
scanf("%d",&num);
temp=num;

if(num<0)
printf("%d is not Amstrong\n",num);

else
{
while (temp!=0)
{
   count++;
   temp/=10;
}
temp=num;
while (temp!=0)
{
    digit=temp%10;
    sum=sum+power(digit,count);
    temp/=10;
}

if(sum==num)
printf("%d is Amstrong\n",num);

else
printf("%d is not Amstrong\n",num);

}

    return 0;
}