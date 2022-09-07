#include<iostream>
using namespace std;

class Square
{
  private :

  int num;
  static int count;

  public :

  void setNum(int x) { num = x ; count++ ;}
  
  int getNum() { return num ;}
 static int getCount() { return count ;}

  int square()
  {
    return num*num;
  }

};

int Square :: count;

int main()
{
    Square s1,s2,s3,s4;
    s1.setNum(15);
    cout<<"Square of "<<s1.getNum() <<" is : "<<s1.square() <<endl;
    s2.setNum(3);
    s3.setNum(7);
    s4.setNum(2);
    cout<<"Function setNum is call : "<<Square::getCount() <<" times" <<endl;
    return 0;
}








