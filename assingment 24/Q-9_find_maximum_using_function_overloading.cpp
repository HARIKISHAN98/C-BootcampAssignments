#include<iostream>
using namespace std;
int maxi(int,int);
float maxi(float num1,float num2);

int main()
{
int num1,num2;
cout<<"Enter two number"<<endl;
cin>>num1>>num2;
cout<<"Maximum number is "<<maxi(num1,num2)<<endl;

float x,y;
cout<<"Enter two number"<<endl;
cin>>x>>y;
cout<<"Maximum number is "<<maxi(x,y)<<endl;

    return 0;
}

int maxi(int num1,int num2)
{
    if(num1<num2)
    return num2;

    else
    return num1;
}

float maxi(float num1,float num2)
{
    if(num1<num2)
    return num2;

    else
    num1;
}



