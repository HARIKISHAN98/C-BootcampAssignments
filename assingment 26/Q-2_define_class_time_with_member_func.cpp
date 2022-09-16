#include<iostream>
using namespace std;

class time
{
    private :
    int h,m,s;

    public :

    void setData(int x,int y,int z)
    {
        h=x;
        m=y;
        s=z;
    }

    void showData()
    {
        cout<<h <<" : " <<m <<" : " <<s <<endl;
    }

    void normalize()
    {
    //    if(s > 60)
    //    {
    //       s-=60;
    //       m++;
    //    }

    //    if(m>60)
    //    {
    //     m-=60;
    //     h++;
    //    }

      m = m + s/60;
      s=s%60;
      h=h+m/60;
      m=m%60;

    }
     
    time add(time t)
    {
        time temp;
        temp.h = h + t.h;
        temp.m = m + t.m;
        temp.s = s + t.s;
        temp.normalize();
        return temp;
    }

};
int main()
{
time t1,t2,t3;
t1.setData(5,17,22);
t2.setData(11,67,64);
// t2.showData();
// t2.normalize();
t3=t1.add(t2);
t1.showData();
t2.showData();
t3.showData();


    return 0;
}