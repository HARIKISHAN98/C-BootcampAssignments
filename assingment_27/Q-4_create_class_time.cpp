#include<iostream>
using namespace std;

class Time
{
   private :
   int Hours,Minutes,Seconds;

   public :

   int operator==(Time X)  //check time are equal or not 
   {
      if(Hours != X.Hours)
      return 0;

      else
      {
         if(Minutes != X.Minutes)
         return 0;

         else
         {
            if(Seconds != X.Seconds)
            return 0;
            
            else
            return 1;
         }

      }

   }
   
   friend ostream& operator<<(ostream &os,Time &t) ;

   friend istream& operator>>(istream &, Time &);  
   
};

  ostream& operator<<(ostream &os,Time &t) //to display the content/time
   {
    os<<"Hours   : "<<t.Hours <<endl;
    os<<"Minutes : "<<t.Minutes <<endl;
    os<<"Seconds : "<<t.Seconds <<endl;
    return os;
   }

   istream& operator>>(istream &i, Time &t)  //to accept the time
   {
    cout<<"Enter Hours   :  ";
    i>>t.Hours;
    cout<<endl;

    cout<<"Enter Minutes :  ";
    i>>t.Minutes;
    cout<<endl;

    cout<<"Enter Seconds :  ";
    i>>t.Seconds;
    cout<<endl;

    return i;
   }

int main()
{
    Time t1,t2;
    int x;
    cout<<"Enter First time"<<endl;
    cout<<"-----------------------"<<endl;
    cin>>t1;  // (>>)operator is used to accept the time 
    cout<<"First Time :"<<endl;
    cout<<t1;  // (<<)operator is used to display the time


    cout<<endl<<"Enter Second time"<<endl;
    cout<<"-----------------------"<<endl;
    cin>>t2;  // (>>)operator is used to accept the time
    cout<<"Second Time :"<<endl;
    cout<<t2;  // (<<)operator is used to display the time
    cout<<endl;
    x = t1==t2;

    if(x)
    cout<<"Time are same " <<endl ;  // (==)operator is used to check the two given time are equal or not
    else
   cout<<"Time are not same " <<endl ;
   
    return 0;
}