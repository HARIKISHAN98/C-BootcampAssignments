#include<iostream>
using namespace std;

class Date
{
   private :
   int date,month,year;
   
   public :
   
   Date() { date = 0 ; month = 0; year =0;  }

   Date(int x,int y,int z)
   {
    date = x;
    month = y;
    year = z;
   }

 void setDate(int x,int y,int z)
   {
    date = x;
    month = y;
    year = z;
   }

   void showData() { cout <<"DD/MM/YY : "<<date <<"/" <<month <<"/" <<year <<endl;}

   Date getData() 
   {
      Date d;
      d.date = date ;
      d.month = month;
      d.year = year;
      return d;
   }

};

int main()
{
 Date d1(14,7,2022) , d2(14,4,2022) ,d3;
 d1.showData();
 d2.showData(); 
 d3=d1.getData();
 d3.showData();
return 0;
}