#include<iostream>
using namespace std;

class counter
{
    private :
static  int count;

  public :

counter() { count++; }

void inc_count()
{
    count++;
}

void showCount() 
{
     cout<<"count is : "<<count <<endl;
}

};

int counter :: count;



int main()
{
    counter c1,c2,c3;
    //  c1.inc_count();
     c1.showCount();
    return 0;
}
