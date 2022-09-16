#include<iostream>
using namespace std;

class Box
{
    private :
    int length,breadth,height;
    float volume;

    public :
    Box(){length =0 ; breadth=0 ; height=0 ;}

    Box(int x,int y,int z) //parameterised constructor
    {
        length = x;
        breadth = y;
        height = z;
    }

    void setData(int x,int y,int z)
    {
        length = x;
        breadth = y;
        height = z;
    }
    
    void showData()
    {
        cout<<"Length : "<<length <<" " <<"Breadth : "<<breadth <<" " <<"Height : "<<height <<endl;
    }

    Box getData()
    {
        Box b;
        b.length = length;
        b.breadth = breadth;
        b.height = height;
        return b;
    }

    void Findvolume()
    {
        volume = length*breadth*height ;
    }

    float getVolume() 
    { return volume;}
};

int main()
{
    Box b1(3,4,5) ,b2(6,7,8) ,b3 ,b4(2,5,3);
    b3=b1.getData();
    b1.Findvolume();
    b2.Findvolume();
    b3.Findvolume();
    cout<<"Volume is : "<<b1.getVolume() <<" with " ;
    b3.showData();
    b4.Findvolume();

    cout<<"Volume is : "<<b4.getVolume() <<" with " ;
    b4.showData();
    return 0;
}