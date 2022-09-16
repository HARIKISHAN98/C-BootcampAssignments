#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;


class Bill
{
    private :
    int Account_no,Area_pincode ;
    char Acc_Holder_Name[20];
    float Bill_amount,Meter_reading;

    public :

    Bill()
    {
        Account_no=0,Area_pincode=0,Acc_Holder_Name[0]='\0',Bill_amount=0,Meter_reading=0;
    }
 
    void get_Account_No()
    {
        int temp;
        cout<<"Enter Account Number of your Electricity Bill" <<endl;
        cin>>temp;
        
        if(temp<0)
        Account_no = -temp;

        else
        Account_no = temp;

    }

    void get_Area_pincode()
    {
        int temp;
        cout<<"Enter Your Area Pincode"<<endl;
        cin>>temp;
        
        if(temp<0)
        Area_pincode = -temp;

        else
        Area_pincode = temp;
    }

    void get_Acc_Holder_Name()
    {
      cout<<"Enter Account Holder Name"<<endl;
      fflush(stdin);
      fgets(Acc_Holder_Name,20,stdin);
      Acc_Holder_Name[strlen(Acc_Holder_Name)-1] = '\0';
    }
    
    void get_Meter_reading()
    {
     float temp;
     cout<<"Enter Your Meter Reading"<<endl;
     cin>>temp;

     if(temp<0)
     Meter_reading = -temp;

     else
     Meter_reading = temp;

    }

    void Calculate_Bill()
    {
       if(Meter_reading <=100)
       {
        Bill_amount = Meter_reading * 1.20;
       }

       else if(Meter_reading <=200)
       {
        Bill_amount = 120 + (Meter_reading - 100) * 2;
       }

       else
       {
        Bill_amount = 320 + (Meter_reading - 200) * 3;
       }
    }

    void Display_bill()
    {
        cout<<"Amount : "<<Bill_amount <<endl;
    }

    void Display_All_Details()
    {
        cout<<endl <<"Acount Holder Name : "<<Acc_Holder_Name <<endl;
        cout<<"Account No : "<<Account_no <<endl;
        cout<<"Area Pincode : "<<Area_pincode <<endl;
        cout<<"Meter Reading : "<<Meter_reading <<endl;
        cout<<"Bill Amount : RS."<<Bill_amount <<endl <<endl;
    }

};

int main()
{
  Bill b1,b2;
  b1.get_Account_No();
  b1.get_Area_pincode();
  b1.get_Acc_Holder_Name();
  b1.get_Meter_reading();
  b1.Calculate_Bill();
  b1.Display_All_Details();

  b2=b1;
  b2.Display_All_Details();

    return 0;
}