#include<iostream>
using namespace std;

class complex
{
    private :
    int fact;

    public :
    void setFact(int x)
     {
         fact = x ;

         if(fact<0)
         fact=-fact;
     }

    int find_factorial()
    {
       int ans;
        for(ans=1 ; fact!=0 ; fact--)
              ans = ans*fact;

        return ans;
    }
};

int main()
{
    complex c1;
    c1.setFact(7);
    cout<<"factorial = " <<c1.find_factorial() <<endl;

    return 0;
}