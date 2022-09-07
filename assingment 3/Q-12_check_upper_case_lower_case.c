#include<stdio.h>
int main()
{
  char ch;

  printf("Enter an alphabet\n");
  scanf("%c",&ch);

  if(ch >=97 && ch<=122)
  printf("\nLower case\n");

  else if(ch >=65 && ch<=90)
  printf("\nUpper case\n");

  else
  printf("\nInvalid Case\n");

    return 0;
}