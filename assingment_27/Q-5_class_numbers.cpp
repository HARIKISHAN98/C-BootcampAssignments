#include<iostream>
using namespace std;

class Numbers
{
    private :
    int x,y,z;

    public :

    void setData(int a,int b,int c)
    {
        x = a;
        y = b;
        z = c;
    }

    void showData()
    {
        cout<<"X = "<<x <<" , Y = "<<y <<" , Z = "<<z <<endl;
    }

     void operator-( )
    {
        x = -x;
        y = -y;
        z = -z;
    }

    // Numbers operator-()
    // {
    //     Numbers temp;
    //     temp.x = -x;
    //     temp.y = -y;
    //     temp.z = -z;
    //     return temp;
    // }
};

int main()
{
    Numbers n1,n2;
    n1.setData(3,5,7);
    n2.setData(2,4,6);
     
     n1.showData();
    // Numbers n3 = -n1;
    -n1;  //n1.operator-();
    -n2;
    n2.showData();
     n1.showData();
    //  n3.showData();



    return 0;
}