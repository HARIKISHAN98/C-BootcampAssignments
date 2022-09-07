#include<stdio.h>
#include<string.h>
struct student
{
    int roll_no;
    char name[20];
    char address[20];
}S2,S4={4,"harikishan","Bombay"},S3={3,"Manish","Bombay"};

void display(struct student S)
{

printf("\nStudent Roll no : %d\n",S.roll_no);
printf("Student Name : %s\n",S.name);
printf("Student Address : %s\n",S.address);

}

int main()
{
struct student S1={1,"Hunny","USA"},S5={5,"Isha","Bombay"};
display(S1);

S2.roll_no=2;
strcpy(S2.name,"Kapil");
strcpy(S2.address,"Kherki");

display(S2);
display(S3);
display(S4);
display(S5);

struct student S6,S7={7,"Hunny Mittal","Gulshan Ikebana"},S8;

S6.roll_no=6;
strcpy(S6.name,"priyanka");
strcpy(S6.address,"Delhi");

display(S6);
display(S7);

S8.roll_no=8;
strcpy(S8.name,"Ayush");
strcpy(S8.address,"Mumbai Bandra");

struct student S9={9,"Muskan","Londan"},S10={10,"Hk","Noida"};

display(S8);
display(S9);
display(S10);










    return 0;
}