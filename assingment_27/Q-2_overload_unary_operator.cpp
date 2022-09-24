#include<iostream>
using namespace std;

class item
{
    private:
    int num;

    public:

    void setData(int X) {num=X;}

    void showData() { cout<<"a : "<<num <<endl; }

    item operator++() //pre increment
    {
      item temp;
      temp.num = ++num;
      return temp;
    }

    item operator++(int ) //post increment
    {
      item temp;
      temp.num = num++;
      return temp; 
    }

    item operator--() //pre decrement
    {
      item temp; 
      temp.num = --num;
      return temp;
    }

    item operator--(int ) //post decrement
    {
      item temp;
      temp.num = num--;
      return temp;
    }

    
};



int main()
{
    item i1,i2,i3;
    i1.setData(5);
    i2.setData(7);
    i1.showData();
    ++i1;
    i1.showData();
    i1++.showData();
    i1.showData();
    i3=--i2;
    i2.showData();
    i2--.showData();
    i2.showData();
    item i4=++i3;
    i4.showData();


    return 0;
}