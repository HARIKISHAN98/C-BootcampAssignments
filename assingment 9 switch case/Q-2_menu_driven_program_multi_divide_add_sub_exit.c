#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
 while(1){   
    int num;
printf("Enter Your Choice\n");
printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
scanf("%d",&num);

switch (num)
{
case 1:
  {  
    int num1,num2;
    printf("Enter two number\n");
    scanf("%d%d",&num1,&num2);
    printf("Sum : %d\n",num1+num2);

    break;
  }
case 2:
  {
   int num1,num2;
    printf("Enter two number\n");
    scanf("%d%d",&num1,&num2);
    printf("Subtraction : %d\n",num1-num2);
    break;
  }
case 3:
  {  
    int num1,num2;
    printf("Enter two number\n");
    scanf("%d%d",&num1,&num2);
    printf("Multiplicaton : %d\n",num1*num2);
    break;
  }
case 4:
  {
    float num1,num2;
    printf("Enter two number\n");
    scanf("%d%d",&num1,&num2);
    printf("Division : %.2f\n",num1/num2);
    break;
  }

case 5:
 {
printf("Thank You\nPress any key to exit\n");
getch();
break;
// exit(0);
 }

default:
printf("Invalid number\n");
}
if(num==5)
break;
 }
    return 0;
}