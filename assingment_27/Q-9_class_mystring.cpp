#include<iostream>
#include<cstring>
using namespace std;

class mystring
{
  private :
  char str[100];

  public :

  friend ostream& operator<<(ostream & ,mystring &);
  friend istream& operator>>(istream &,mystring &);

  void operator!()
  {
    for(int i = 0; str[i]!=0 ; i++)
    {
      if(str[i] >='A' && str[i] <='Z')
      str[i]+=32;

      else if(str[i]>='a' && str[i]<='z')
      str[i]-=32;
    }

  }

};

ostream& operator<<(ostream &out,mystring &S)
{
  out<<"string is : "<<S.str <<endl;
  return out;
}

istream& operator>>(istream &in,mystring &S)
{
 cout<<"Enter a string : ";
 cin.getline(S.str,100);
 return in;
}

int main()
{
  mystring s;
  cin>>s;
  cout<<s;
  !s;
  cout<<s;

    return 0;
}