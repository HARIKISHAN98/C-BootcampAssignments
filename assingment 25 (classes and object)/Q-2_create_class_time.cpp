#include<iostream>
using namespace std;

class Time
{
    private :
    int hour,min,sec;

    public :
    void setHour(int x) { hour = x ;}
    void setMin(int y) { min = y ;}
    void setSec(int z) { sec = z ;}

    void display_Hour() { cout<<hour <<" hr ";}
    void display_Min() { cout<<min <<" min ";}
    void display_Sec() { cout<<sec <<" sec " ;}
};

int main()
{
    Time t1;
    t1.setHour(8);
    t1.setMin(28);
    t1.setSec(16);

    t1.display_Hour();
    t1.display_Min();
    t1.display_Sec();

    return 0;
}