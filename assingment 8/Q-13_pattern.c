/*
1 2 3 4 5 6 7 8 9 10 11 12 13

A B C D E F G F E D C B A  1 
A B C D E F   F E D C B A  2 
A B C D E       E D C B A  3
A B C D           D C B A  4
A B C               C B A  5
A B                   B A  6
A                       A  7


*/
#include<stdio.h>
int main()
{
int num;
printf("Enter an odd number\n");
scanf("%d",&num);

char k='A';

for(int i=1;i<=(num/2+1) ;i++)
{
    k='A';
    for(int j=1;j<=num ;j++)
    {
        if(j<=(num/2+2)-i || j>=(num/2)+i )
        {
            printf("%c ",k);

            if(j<(num/2+2)-i)
            k++;

            if(j>=(num/2)+i)
            k--;
        }

        else
        printf("  ");
    }
    printf("\n");
}


    return 0;
}