#include<iostream>
using namespace std;

class Greatest
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

  int Greatest_is()
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
    Greatest G1;
    G1.set_Nums(11,924,517);
   cout<<"Larger number is : " <<G1.Greatest_is() <<endl;

    return 0;
}