#include<iostream>
using namespace std;
class fraction 
{
  private :
  int numerator,denominator;

  public :

  fraction(){numerator = 0,denominator = 0;}

  // void setData(int x,int y)
  // {
  //   numerator = x;
  //   denominator = y;
  // }

  // void showData()
  // {
  //   cout<<numerator <<"/" <<denominator<<endl;
  // }

  fraction operator++() //pre increment
  {
    fraction temp;
    temp.numerator = ++numerator   ;
    temp.denominator = ++denominator ;
    return temp;
  }

   fraction operator++(int useless) //post increment
  {
    fraction temp;
    temp.numerator = numerator++   ;
    temp.denominator = denominator++ ;
    return temp;
  }
  
friend ostream& operator<<(ostream &,fraction &);
   
friend istream& operator>>(istream &,fraction &);


};

istream& operator>>(istream &i,fraction &f)
{
  cout<<"Numerator : ";
  i >> f.numerator;
  cout<<endl <<"Denominator : ";
  i >> f.denominator;
  cout<<endl;
}

ostream& operator<<(ostream &os,fraction &f)
{
    cout<<f.numerator <<"/" <<f.denominator<<endl;
    return os;
}
  

int main()
{
fraction f1,f2;
cout<<"Enter 1st fraction value " <<endl;
cin>>f1;
cout<<f1;
++f1;
cout<<f1;

cout<<endl;

f2 = ++f1;
cout<<f1;
cout<<f2;

cout<<"Enter 2nd fraction value "<<endl;
cin>>f2;
cout<<f2;
f2++;
cout<<f2;


    return 0;
}