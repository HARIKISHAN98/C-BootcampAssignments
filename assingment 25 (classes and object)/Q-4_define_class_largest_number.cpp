#include<iostream>
using namespace std;

class LargestNumber
{
  private :
  int num1,num2,num3;

  public :
 void set_Nums(int x,int y,int z)
  {
    num1 = x;
    num2 = y;
    num3 = z;
  }

  int larger_is()
  {
    if(num3 > num1 && num3 > num2)
    return num3;

    else if(num1 > num2 && num1 > num3)
    return num1;

    else
    return num2;
  }

};

int main()
{
    LargestNumber L1;
    L1.set_Nums(0,-7,-17);
   cout<<"Larger number is : " <<L1.larger_is() <<endl;

    return 0;
}