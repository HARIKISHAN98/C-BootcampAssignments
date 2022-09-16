#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class Student
{
    private :
    int rollNo;
    char Name[20];
    char course[20];
   long long int MoblieNo;

    public :
    Student() { rollNo=0,Name[0]=0,course[0]=0,MoblieNo =0; } //default constructor(No argument , empty body constructor)
   
    Student(int x, char name[], char cour[],long long int y)   //parameterised constructor
    {
      rollNo = x;
      strcpy(Name,name);
      strcpy(course,cour);
      MoblieNo = y;
    }

    void setData(int x, char name[], char cour[],long long int y)
    {
      rollNo = x;
      strcpy(Name,name);
      strcpy(course,cour);
      MoblieNo = y;
    }
    
    void showData()
    {
        cout<<"Name : "<<Name <<endl;
        cout<<"Course : "<<course <<endl;
        cout<<"Roll No : "<<rollNo <<endl;
        cout<<"Moblie No. : "<<MoblieNo <<endl <<endl;
    }

    Student getData()
    {
        Student S;
        S.rollNo = rollNo;
        strcpy(S.Name,Name);
        strcpy(S.course,course);
        S.MoblieNo= MoblieNo;
        return S;

    }

};

int main()
{
   Student S1(1,"Hunny","BCA",9466617846) , S2(2,"Isha","Btech",9991502985) , S3;
   S1.showData();
   S2.showData();
   S3=S2.getData();
   S3.showData();
    return 0;
}