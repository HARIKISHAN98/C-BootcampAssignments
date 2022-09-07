#include<iostream>
using namespace std;
// int sum(int ,int ,int=0 ,int =0);
int sum(int &,int &);


int sum(int &x,int &y)
{
    return x+y;
}

int main()
{
int x=5,y=10;
// cout<<"Enter two numbers"<<endl;
// cin>>a>>b;
// cout<<"Sum is : "<<sum(a,b) <<endl;
// int c;
// cout<<"Enter three numbers"<<endl;
// cin>>a>>b>>c;
// cout<<"Sum is : "<<sum(a,b,c) <<endl;
// int d;
// cout<<"Enter four numbers"<<endl;
// cin>>a>>b>>c>>d;
// cout<<"Sum is : "<<sum(a,b,c,d) <<endl;

//reference variable
int &a=x,&b=y;
cout<<"sum is : "<<sum(a,b)<<endl;
    return 0;
}