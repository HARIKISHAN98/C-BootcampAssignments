#include<stdio.h>
#include<math.h>
int main()
{
 int count=0,i,ans=0,num,temp;
 printf("\nEnter a number");
 scanf("%d",&num);

temp=num;
while (temp!=0)
{
    count++;
    temp/=10;
}
i=count-1;

while (num!=0)
{
    int digit=num%10;
    ans=digit*pow(10,i)+ans;
    num/=10;
    i--;
}

printf("\nAns : %d",ans);



    return 0;
}