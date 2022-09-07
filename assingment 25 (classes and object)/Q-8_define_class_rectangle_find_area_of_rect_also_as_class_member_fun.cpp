#include<iostream>
using namespace std;

class Rectangle
{
    private :
    int l,b;

    public :
 void setLength(int x) { l = x; }
 void setbreadth(int y) { b = y ;}

 int getLength() { return l;}
 int getBreadth() { return b;}

 int Area()
 {
    return l*b;
 }

};

int main()
{
    Rectangle R1;
    R1.setLength(7);
    R1.setbreadth(9);

    cout<<"Area Rectangle is : "<<R1.Area() <<" , using length = "<<R1.getLength() <<" and breadth = "<<R1.getBreadth() <<endl;


    return 0;
}