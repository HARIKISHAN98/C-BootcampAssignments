#include<iostream>
using namespace std;

class Complex
{
    private :
    int real,img;

    public :
    
    void setData(int x,int y)
    {
        real = x;
        img = y;
    }

    void showData()
    {
        cout<<"Real : "<<real <<" , Img : "<<img <<endl;
    }

    friend Complex operator+(Complex,Complex);

    // friend Complex operator+(Complex,int);

    // friend Complex operator+(int,Complex);
};

Complex operator+(Complex X,Complex Y)
{
    Complex temp;
    temp.real = X.real + Y.real;
    temp.img = X.img + Y.img;
    return temp;
}

// Complex operator+(Complex X,int Y)
// {
//     Complex temp;
//     temp.real = X.real + Y;
//     temp.img = X.img + Y;
//     return temp;
// }

// Complex operator+(int X,Complex Y)
// {
//     Complex temp;
//     temp.real = X + Y.real;
//     temp.img = X + Y.img;
//     return temp;
// }


int main()
{
    Complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(5,6);
    c3=c1+c2; //// c3=operator+(c1,c2);
    c3.showData();
    // c3=c1+5;
    // c3.showData();
    // c3=7+c1;
    // c3.showData();
}



