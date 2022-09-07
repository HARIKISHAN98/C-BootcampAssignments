#include<iostream>
using namespace std;
class complex 
{
    private :
    int real;
    int img;

    public:
    void setReal(int x) { real= x ;}
    void setImg(int y) { img = y ;}

    int printReal() { cout<<real;}
    int printImg() { cout<<" + "<<img <<"i " <<endl;}

    // void add(complex c)
    // {
    //     cout<<real + c.real <<" + " <<img + c.img <<"i " <<endl;
    // }

};

int main()
{
  complex c1,c2;
  c1.setReal(3);
  c1.setImg(5);
  c1.printReal();
  c1.printImg();

  c2.setReal(4);
  c2.setImg(7);

//   c1.add(c2);

    return 0;
}