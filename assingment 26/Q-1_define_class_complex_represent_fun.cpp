#include<iostream>
using namespace std;

class complex
{
    private :
   int a,b;

   public :
   void setData(int x,int y)
   {
    a=x;
    b=y;
   }

   void showdata()
   {
    cout<<"Real : "<<a <<" " <<"Img : " <<b <<endl;
   }

   complex add(complex c)
   {
    complex temp;
    temp.a = a + c.a;
    temp.b = b + c.b;
    return temp;
   }

};

int main()
{
complex c1,c2,c3;
c1.setData(3,4);
c2.setData(5,2);
c1.showdata();
c2.showdata();
c3=c1.add(c2);
c3.showdata();

    return 0;
}