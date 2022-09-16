#include<iostream>
using namespace std;

class Bank
{
    private :
    float principal,SI;
    int ROI,Year;

    public :
    Bank() { principal=0 ,ROI = 0,Year =0;} //non parameterised constructor

    Bank(float X,int Y,int Z)  //parameterised constructor
    {
       principal = X;
       ROI = Y;
       Year =Z;
    }

    void Enter_Principal()
    {
        float x;
        cout<<"Enter principal"<<endl;
        cin>>x;
        principal=x;
    }
  
    float get_Principal() { return principal; }
    
    void Enter_ROI()
    {
        int x;
        cout<<"Enter Rate of Interest"<<endl;
        cin>>x;
        ROI=x;
    }
 
    int getROI(){ return ROI; }

    void Enter_Year()
    {
       int x;
       cout<<"Enter year"<<endl;
       cin>>x;
       Year=x; 
    }
 
    int getYear() { return Year ;}

    void Calculte_SI()
    {
        SI=(principal*ROI*Year)/100;
    }
    
    float Get_SI()
    { return SI ;}
};

int main()
{
    Bank b1(100000.0f,10,5),b2(50000.0f,15,2),b3;
    b1.Calculte_SI();
    cout<<"SI : " <<b1.Get_SI() <<" with pricipal : " <<b1.get_Principal() <<" ROI : "<<b1.getROI() <<" ,Year : "<<b1.getYear() <<endl;
    b3.Enter_Principal();
    b3.Enter_ROI();
    b3.Enter_Year();
    b3.Calculte_SI();
    cout <<"SI : " <<b3.Get_SI() <<" with pricipal : " <<b3.get_Principal() <<" ROI : "<<b3.getROI() <<" ,Year : "<<b3.getYear() <<endl;
}