#include<stdio.h>
int main()
{
int num=0;
printf("Enter year\n");
scanf("%d",&num);

switch(num%100)
{
// printf("line no. 10 %d is a leap year\n",num);

 case 0 :
 if(num%4) 
       printf("%d is a leap year\n",num);
        break;
    

    switch (num % 100)
    {
       case 0:
       if(num%4) 
       printf("%d is a leap year\n",num);
        break;
    
    default:
       printf("%d is not a leap year\n",num);
        break;
    }

     switch (num % 4)
    {
       case 0:
       printf("%d is a leap year\n",num);
        break;
    
    default:
       printf("%d is not a leap year\n",num);
        break;
    }
}


    return 0;
}