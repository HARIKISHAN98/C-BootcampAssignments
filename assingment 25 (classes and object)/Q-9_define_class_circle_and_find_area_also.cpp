#include<iostream>
using namespace std;

class Circle 
{
    private :
    int r ;

    public :
    void setRadius(int x) { r = x ;}

    int getRadius() { return r;}

    float Area()
    {
      return 3.14*r*r;
    }

};

int main()
{
    Circle c1;

    c1.setRadius(3);
    
    cout<<"Area of circle is : "<<c1.Area() <<" with radius "<<c1.getRadius() <<endl;

    return 0;
}