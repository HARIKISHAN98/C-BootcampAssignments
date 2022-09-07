#include<iostream>
#include<string.h>
using namespace std;

struct book
{
    int bookid;
    char title[20];
    float price;

};

book input();
void display(book b);


int main()
{
    book b1={1,"C",630.0f},b2,b3;

    b2.bookid=2;
    strcpy(b2.title,"DSA");
    b2.price=650.0f;

    b3=input();
    
    display(b1);
    display(b2);
    display(b3);

    return 0;
}

 void display(book b)
   {
    cout<<b.bookid <<" " <<b.title <<" " <<b.price <<endl;
   }

   book input()
   {
    struct book b;
    cout<<endl <<"Enter bookid ,title and price"<<endl;
    cin>>b.bookid;
    cin.ignore();
    cin.getline(b.title,20);
    cin>>b.price;

    return b;
   }