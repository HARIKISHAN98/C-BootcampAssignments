int fact(int);

int fact(int n)
{
    int fact=1;
  while (n!=1)
  {
   fact=fact*n;
   n--;
  }
  return fact;
}
