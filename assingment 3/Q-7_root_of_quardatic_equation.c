#include<stdio.h>
int main()
{
  int a,b,c,D;
  printf("Enter Cofficient of quardatic equation\n");
  scanf("%d%d%d",&a,&b,&c);

 D = (b*b) - (4*a*c);

D==0 ? printf("Roots are real & equal\n") : D>0 ? printf("Roots are real & distinct\n") : printf("Root are imaginary roots\n");

    return 0;
}