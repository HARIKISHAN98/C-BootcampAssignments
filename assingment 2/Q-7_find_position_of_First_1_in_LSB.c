#include<stdio.h>
int main()
{
int num,count=0,result;
printf("Enter a number\n");
scanf("%d",&num);

while(num!=0){
count++;
result=num&1;
if(result==1){
printf("Position : %d\n",count);
break;
}

num=num>>1;
}

    return 0;
}