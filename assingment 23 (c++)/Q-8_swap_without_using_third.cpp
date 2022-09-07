#include<iostream>
using namespace std;
int main()
{
int num1,num2;
cout<<"Enter two number"<<endl;
cin>>num1>>num2;

cout<<"Before swap "<<endl;
cout<<"num1= "<<num1 <<",num2= "<<num2 <<endl; 


num1=num1^num2;
num2=num1^num2;
num1=num1^num2;

cout<<"After swap "<<endl;
cout<<"num1= "<<num1 <<",num2= "<<num2 <<endl; 

    return 0;
}