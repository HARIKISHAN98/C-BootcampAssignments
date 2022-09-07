/*

     * * * * *           * * * * *     
  * * * * * * *       * * * * * * *   
* * * * * * * * *   * * * * * * * * * 
* * * * * * M y S i r G * * * * * * * 
  * * * * * * * * * * * * * * * * *   
    * * * * * * * * * * * * * * *     
      * * * * * * * * * * * * *       
        * * * * * * * * * * *
          * * * * * * * * *
            * * * * * * *
              * * * * *
                * * *
                  *


*/

#include<stdio.h>
int main()
{
// int num;
// printf("Enter an odd number\n");
// scanf("%d",&num);

printf("\n");

for(int i=1;i<=3 ;i++)
{
    for(int j=1;j<=19 ;j++)
    {
       if(j>=4-i && j<=6+i || j>=14-i && j<=16+i)
       printf("* ");

       else
       printf("  ");

    }
        
    printf("\n");
}

for(int i=1;i<=10 ;i++)
{
    for(int j=1;j<=19 ;j++)
    {
        

       if(j>=i && j<=20-i )
       printf("* ");
     
       
       else
       printf("  ");

       
       if(i==1 && j==6)
       printf("M y S i r G ");

       if(i==1 && j==6)
        j+=6;
    }
        
    printf("\n");
}



    return 0;
}