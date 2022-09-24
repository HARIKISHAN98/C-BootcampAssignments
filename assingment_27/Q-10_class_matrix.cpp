#include<iostream>
using namespace std;

class matrix
{
    private :
    int a[3][3];

    public :

    void input()
    {
        cout<<"Enter a matrix (3 X 3) : "<<endl;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin>>a[i][j];
        
    }

    void display()
    {
        cout<<"Matrix is : "<<endl;
        for (int i = 0; i < 3; i++)
          {    
            for (int j = 0; j < 3; j++)
                cout<<a[i][j] <<"  ";

                cout<<endl;
          }

          cout<<endl;
    }

    matrix operator+(matrix m)
    {
        matrix temp;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
               temp.a[i][j]=a[i][j] + m.a[i][j];

        return temp;
    }

};

int main()
{
   matrix m1,m2,m3;
   m1.input();
   m2.input();
   m3=m1+m2;
   m1.display();
   m2.display();
   m3.display();

    return 0;
}