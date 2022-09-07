#include"Q-6_calculate_factorial.c"
int combination(int,int);

int combination(int n,int r)
{
  return( ( fact(n) ) / ( fact(r)*fact(n-r) )  );
}