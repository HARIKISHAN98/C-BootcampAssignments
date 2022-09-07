// #include<stdio.h>
// #include<math.h>

//     int power(int,int);

// int power(int digit,int count)
// {
// int ans=1;
// while (count!=0)
// {
//     ans=ans*digit;
//     count--;
// }
// return ans;

// }
// int main()
// {
//     int i,temp,count=0,sum=0,digit;

//      printf("Amstrong under 1000\n");
//     for ( i=0 ; i< 1000 ; i++)
//     {
//         // printf("%d ",i);
//         temp=i;
//         while(temp!=0)
//         {
//             count++;
//             temp/=10;
//         }

//         temp=i;
        
//         while(temp!=0)
//         {
//             digit=temp%10;
//             sum=sum+power(digit,count);
//             printf("%d ",sum);
//             temp/=10;
//         }
        
//         // if(sum==i)
//         // printf("%d ",i);
//     }
    

//     return 0;
// }























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
int num,temp,count=0,digit,sum=0,i;

printf("Amstrong number under 1000\n");

for( i=100 ; i<1000 ;i++)
{
    num=i;

for( temp=num,count=0 ; temp!=0 ; temp/=10)
   count++;

for ( temp=num ;temp!=0 ;temp/=10)
{
    digit=temp%10;
    sum=sum+power(digit,count);
}

if(sum==num)
printf("%d ",num);

}
    return 0;
}