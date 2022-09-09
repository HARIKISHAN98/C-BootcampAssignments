#include<stdio.h>
int main()
{
int x=10,*p,**q,***r;
p=&x;
q=&p;
r=&q;

printf("%d %d %d %d\n",x,*p,**q,***r);
printf("%u %x %d %d\n",&x,p,*q,**r);
printf("%d %d %d\n",&p,q,*r);
printf("%x %x\n",&q,r);

    return 0;
}