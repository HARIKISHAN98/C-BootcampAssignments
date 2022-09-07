#include<stdio.h>
int main()
{
  int hindi,english,math,science,sst;
  printf("Enter Marks of 5 subjects\n");
  scanf("%d%d%d%d%d",&hindi,&english,&math,&science,&sst);



if(hindi<100 && english <100 && math <100 && science <100 && sst <100)
 {  if(hindi<33 || english <33 || math <33 || science<33 || sst<33)
   printf("OOPs ! you fail\n");
   
   else
   printf("You pass\n");
 
 }
// 45 34 56 45 33
 else
 printf("\nYou enter marks above 100\nBete sahi marks bhar\n");
    return 0;
}