#include<iostream>
using namespace std;
int check_Term(int num)
{
    int term_1=-1,term_2=1,term_next;

    for ( term_next = term_1 + term_2 ; num >= term_next; term_1 = term_2 , term_2 = term_next)
    {
       term_next=term_1+term_2 ;
       if(num == term_next)
       return 1;

    }

    return 0;
    
}