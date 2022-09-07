#include<stdio.h>
int main()
{

int a,b,c;
  printf("Enter all the three side of triangle\n");
  scanf("%d%d%d",&a,&b,&c);


(a+b>c && b+c >a && c+a >b) ? printf("\nTriangle is Valid") : printf("\nTriangle is not valid");
 
    return 0;
}