#include<stdio.h>
int main()
{
int cp,sp;

printf("Enter Cost price\n");
scanf("%d",&cp);

printf("Enter Selling price\n");
scanf("%d",&sp);

float profit=sp-cp;
float loss=cp-sp;

if(profit>=0)
{
float profit_per=(profit/cp)*100;
printf("Profit %% : %.2f%%\n",profit_per);
}

if(loss>=0)
{
float loss_per=(loss/cp)*100;
printf("loss %% = %.2f%%\n",loss_per);
}
    return 0;
}