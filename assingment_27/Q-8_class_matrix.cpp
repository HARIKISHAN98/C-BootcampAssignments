#include<iostream>
using namespace std;

class Matrix
{
  private :
  int a[3][3];

  public :

  void Enter_data()
  {
    cout<<"Enter Matrix element (3 X 3) :"<<endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin>>a[i][j];
    
  }

  void display_matrix()
  {
    cout<<"Matrix is : "<<endl <<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<a[i][j] <<"  ";
        }
        cout<<endl;
    }
        cout<<endl;
    
  }

  void operator-()
  {
     for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            a[i][j] = -a[i][j];
  }


};
int main()
{
   Matrix m;
   m.Enter_data();
   m.display_matrix();
   -m;
   m.display_matrix();

    return 0;
}