#include<iostream>
using namespace std;
float area(int);
int area(int,int);
float area(int b,float h);

int main()
{
int r;
cout<<"Enter radius of circle"<<endl;
cin>>r;
cout<<"Area of circle is "<<area(r)<<endl;
int l,b;
cout<<"Enter length and breadth of a rectangle"<<endl;
cin>>l>>b;
cout<<"Area of rectangle is "<<area(l,b)<<endl;
int base;
float height;
cout<<"Enter base and height of a triangle"<<endl;
cin>>base>>height;
cout<<"Area of triangle is "<<area(base,height)<<endl;

    return 0;
}

float area(int r)
{
   return  (3.14)*r*r;
}

int area(int l,int b)
{
    return l*b;
}

float area(int b,float h)
{
    return ((b*h)/2);
}

