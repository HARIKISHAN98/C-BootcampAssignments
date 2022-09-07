#include<stdio.h>
#include<conio.h>
int main()
{
    while(1)
    {
int num;
  printf("\nEnter your choice");
  printf("\n1.Check Isosceles or NOT \n2.Check right Angle Triangle or Not\n3.Check Equilateral triangle or not\n4.Exit\n");
  scanf("%d",&num);

switch (num)
{
case 1:
  {
    int num1,num2,num3;
    printf("Enter length of 3 side of triangle\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1==num2 || num2==num3 || num3==num1)
    printf("Triangle is Isoscles\n");

    else
    printf("Triangle is not Isoscles\n");
  }
    break;

  case 2:
  {
    int num1,num2,num3;
    printf("Enter length of 3 side of triangle\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if( num1*num1==num2*num2+num3*num3 || num2*num2==num1*num1 + num3*num3 || num3*num3==num1*num1+num2*num2)
    printf("Triangle is Right angle\n");

    else
    printf("Triangle is not Right angle\n");
  }
    break;

  case 3:
  {
    int num1,num2,num3;
    printf("Enter length of 3 side of triangle\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1==num2 && num2==num3)
    printf("Triangle is Equilateral\n");

    else
    printf("Triangle is not Equilateral\n");
  }
    break; 

  case 4:
  {
    printf("Thankyou! Press any key to Exist\n");
    getch();
    break;
  }  

default:
  printf("Invalid\n");
}

if(num==4)
break;

    }

    return 0;
}