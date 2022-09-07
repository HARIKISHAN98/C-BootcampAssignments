#include<iostream>
using namespace std;
int main()
{
int size=10,arr[size],sum=0;

cout<<"Enter the "<< size <<" number in array"<<endl;

for(int i=0;i<size ;i++)
{
cin>>arr[i];
sum=sum+arr[i];
}

cout<<"sum is : "<<sum <<endl;
    return 0;
}