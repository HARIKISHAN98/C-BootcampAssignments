#include<iostream>
using namespace std;

//       1
//      1 1
//     1 2 1
//    1 2 2 1
void print_pascal(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if(j<=i)
            cout<<" *";

            else
            cout<<"  ";

        }
        cout<<endl;
    }
    
}
int main()
{
print_pascal(5);

    return 0;
}