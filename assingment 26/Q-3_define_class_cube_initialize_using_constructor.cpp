#include<iostream>
using namespace std;

class cube
{
  private :  
  int side,volume;

  public :

  cube(int x) { side = x; }   //initialised with the help of constructor

  void setData(int x) { side = x; }

  void showData() { cout<<"side : "<<side <<endl; }
  int getData() { return side ;}
  void FindVolume() { volume = side*side*side ;}

  int getVolume() { return volume;}




};



int main()
{
  cube c1(4),c2(6),c3(0);
//   c1.setData(4);
//   c2.setData(6);
  c1.showData();
  c2.showData();
  c1.FindVolume();
  c2.FindVolume();
  c3.FindVolume();
  cout<<"Volume : "<<c1.getVolume() <<" with side " <<c1.getData() <<endl;
  cout<<"Volume : "<<c2.getVolume() <<" with side " <<c2.getData() <<endl;
  cout<<"Volume : "<<c3.getVolume() <<" with side " <<c3.getData() <<endl;
  

    return 0;
}