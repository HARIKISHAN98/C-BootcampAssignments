#include<iostream>
using namespace std;

class ReverseNumber
{
    private :
    int num;

    public :

    void setNum(int x) { num = x ; cout<<"num is : "<<x <<endl;}

    int reverse_Number()
    {
       int ans=0;
       for(int digit ;num!=0 ;num/=10)
       {
        digit = num%10;
        ans=ans*10 + digit;   //formula to reverse a number
       }
       return ans;
    }
};

int main()
{
    ReverseNumber R1;
    R1.setNum(-14234);
    cout<<"Reverse is : "<<R1.reverse_Number() <<endl;

    return 0;
}