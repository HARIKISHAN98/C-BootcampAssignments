#include<iostream>
#include<cstring>
using namespace std;

class Cstring
{
  private :
  char str[20];

  public :

  void Enter_string()
  {
    cout<<"Enter a string : ";
    cin.getline(str,20);
  }

  void display_string()
  {
    cout<<str <<endl;
  }

  int operator==(Cstring C)
  {
   return  strcmp(str,C.str);
  }

  Cstring operator+(Cstring C)
  {
    Cstring temp;
    strcpy(temp.str,strcat(str,C.str));
    return temp;
    // cout<<"String After concatinate  : "<<strcat(str,C.str) <<endl;
  }

 
  
};

int main()
{
  Cstring c1,c2,c3;
  c1.Enter_string();
  c2.Enter_string();

  if(c1==c2 == -1)
  cout<<"string 2 is greater"<<endl;
  else if(c1==c2 == 1)
  {
  cout<<"string 1 is greater"<<endl;
  }
  else
  cout<<"string 1 and string 2 is equal"<<endl;

  c3=c1+c2;  //c1.operator(c2);
  cout<<"After concatination : ";
  c3.display_string();
    return 0;
}