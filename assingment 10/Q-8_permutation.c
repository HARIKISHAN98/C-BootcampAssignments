#include"Q-6_calculate_factorial.c"
int permutation(int,int);

int permutation(int n,int r)
{
return ( fact(n) / fact(n-r) );
}
