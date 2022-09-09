#include<stdio.h>
int main()
{
int size=5,arr[size],*ptr=arr,sum=0;

printf("Enter %d element\n",size);

for (int i = 0; i < 5; i++)
{
    scanf("%d",(ptr+i));
    sum=sum+*(ptr+i);
}

printf("Sum is : %d\n",sum);

for (int i = 0; i < 5; i++)
{
    printf("%d ",*(ptr+i));
}

    return 0;
}