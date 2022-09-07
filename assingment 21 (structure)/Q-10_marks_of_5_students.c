#include<stdio.h>
#include<string.h>
struct Marks
{
  int roll_no;
  char name[20];
  int chem_marks;
  int maths_marks;
  int phy_marks;
};

struct Marks input()
{
    struct Marks M;
    printf("\n\nEnter student Roll no \n");
    scanf("%d",&M.roll_no);

    printf("Enter Student Name\n");
    fflush(stdin);
    fgets(M.name,20,stdin);
    M.name[strlen(M.name)-1]='\0';

    printf("Enter Your Chemistry Marks from 100\n");
    scanf("%d",&M.chem_marks);
    
    printf("Enter Your Maths Marks from 100\n");
    scanf("%d",&M.maths_marks);

    printf("Enter Your Physics Marks from 100\n");
    scanf("%d",&M.phy_marks);
  

   return M;    
}

void display(struct Marks M)
{
    int per=(M.chem_marks + M.maths_marks + M.phy_marks)/3;
    printf("\nRoll no : %d\n",M.roll_no);
    printf("Name : %s\n",M.name);
    printf("%s got : %d%% Marks\n",M.name,per);

}

int main()
{
   struct Marks M[5];

   for (int i = 0; i < 5; i++)
   {
     M[i]=input();
   }
   
   for (int i = 0; i < 5; i++)
   {
     display(M[i]);
   }

    return 0;
}