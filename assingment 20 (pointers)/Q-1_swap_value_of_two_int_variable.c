void swap_data(int *,int *);
void swap_data(int *p,int *q)
{
    *q=*q+*p;
    *p=*q-*p;
    *q=*q-*p;
}