#include<stdio.h>
#include<string.h>
struct student 
{
    int roll_no;
    char name[20];
    char Address[20];
    char mobile[10];

};

struct student input()
{
    struct student S;
    printf("\n\nEnter student Roll no \n");
    scanf("%d",&S.roll_no);

    printf("Enter Student Name\n");
    fflush(stdin);
    fgets(S.name,20,stdin);
    S.name[strlen(S.name)-1]='\0';

    printf("Enter Student Address\n");
    fflush(stdin);
    fgets(S.Address,20,stdin);
    S.Address[strlen(S.Address)-1]='\0';

    printf("Enter Student Mobile No. \n");
    for (int i = 0; i < 10; i++)
        scanf("%c",&S.mobile[i]);

   return S;    
}

void display(struct student S)
{
    printf("\nStudent Roll no : %d\n",S.roll_no);
    printf("Student Name : %s\n",S.name);
    printf("Student Address : %s\n",S.Address);
    printf("Student Mobile Number : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%c",S.mobile[i]);
    }
    printf("\n");
}

int main()
{
    int S_count;
    printf("How many students information you want to store\n");
    scanf("%d",&S_count);
    struct student S[S_count];
    
    for(int i=0 ; i < S_count ; i++)
        S[i]=input();

    for(int i=0 ; i < S_count ; i++)
       display(S[i]);


    return 0;
}