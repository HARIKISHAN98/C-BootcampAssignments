#include<iostream>
using namespace std;

class Area
{
    private:
    int side,length,breadth;
    float radius;

    public :
    // void setSide(int x){ side = x;}
    // void setRadius(float y) { radius = y;}
    // void setLength(int z) { length = z;}
    // void setbreadth(int p) { breadth = p; }

    // int getSide() { return side;}
    // float getRadius() { return radius; }
    // int getLength() { return length; }
    // int getbreadth() { return breadth;}
  

    int area(int s)
    {
        side = s;
        return side*side;
    }
  
    float area(float r)
    {
        radius = r;
        return 3.14*radius*radius;
    }

    int area(int l,int b)
    {
        length = l;
        breadth = b;
        return length*breadth;
    }

};

int main()
{
    Area a1;
//    a1.setSide(5);
//    a1.setRadius(5.0f);
//    a1.setLength(5);
//    a1.setbreadth(7);
   cout<<"Area of Square is : "<<a1.area(2) <<endl;//<<" with side "<<a1.getSide() <<endl;
   cout<<"Area of Circle is : "<<a1.area(9.0f) <<endl;//<<" with radius "<<a1.getRadius() <<endl;
   cout<<"Area of Rectangle is : "<<a1.area(8,4) <<endl;//<<" with length "<<a1.getLength() <<" and breadth "<<a1.getbreadth() <<endl;



    return 0;
}