#include<iostream>
using namespace std;

class StaticCount
{
    private :
    static int count;
    int num1,num2,sum;
    public :

    StaticCount() {  num1=0,num2=0,sum=0;}
    
    void setData(int x,int y)
    {
        num1=x;
        num2=y;
    }

    void calculate_sum()  //function
    {
         sum = num1+num2;
         count++;
    }

    void Displaysum()
    {
        cout<<"Sum : "<<sum <<endl;
    }

   static int displayCount()
    {
        return count ;
    }
    

};

int StaticCount :: count = 0;


int main()
{
  StaticCount s1,s2,s3;
  s1.setData(3,4);
  s2.setData(5,7);
  s3.setData(4,9);

  s1.calculate_sum();
  s2.calculate_sum();
  s3.calculate_sum();

  s1.Displaysum();
  s2.Displaysum();
  s3.Displaysum();

  cout<<"Now Count is : "<<StaticCount::displayCount();
    
    return 0;
}