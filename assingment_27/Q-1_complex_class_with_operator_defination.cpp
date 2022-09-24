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
    cout<<"Real : "<<real <<" " <<"Img : "<<img <<endl;
   }

   Complex operator+(Complex C)
   {
     Complex temp;
     temp.real = real + C.real;
     temp.img = img + C.img;
     return temp;
   }

   Complex operator-(Complex C)
   {
    Complex temp;
    temp.real = real - C.real;
    temp.img = img - C.img;
    return temp;
   }

   Complex operator*(Complex C)
   {
    Complex temp;
    temp.real = real * C.real;
    temp.img = img * C.img;
    return temp;
   }

   bool operator==(Complex C)
   {
    if(real == C.real && img == C.img)
    return true;

    else
    return false;

   }

};

int main()
{
   Complex c1,c2,c3;
   c1.setData(3,9);
   c2.setData(2,5);
   c3=c1+c2;
   c3.showData();
   c3=c1-c2;
   c3.showData();
   c3=c1*c2;
   c3.showData();
   bool X = c1==c2;
   cout<<"Is equal : " <<X <<endl;


    return 0;
}