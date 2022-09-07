#include<iostream>
using namespace std;
inline int sum(int,int);
inline float sum(float,float);

int main()
{
    int a,b;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;
    cout<<"Sum is "<<sum(a,b)<<endl;

    float x,y;
    cout<<"Enter two number"<<endl;
    cin>>x>>y;
    cout<<"Sum is "<<sum(x,y)<<endl;
}

int sum(int a,int b)
{
    return a+b;
}

float sum(float x,float y)
{
    return x+y;
}