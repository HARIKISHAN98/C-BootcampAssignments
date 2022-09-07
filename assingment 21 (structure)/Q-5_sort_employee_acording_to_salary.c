#include<stdio.h>
#include<string.h>
// void sort_employee_according_to_salary(struct Employee E[5]);

struct Employee
{
    int id;
    char name[20];
    float salary;
};

struct Employee input()
{
    struct Employee E;
    printf("Enter Employee id,name,salary\n");
    scanf("%d",&E.id);
    fflush(stdin);
    fgets(E.name,20,stdin);
    E.name[strlen(E.name)-1]='\0';
    scanf("%f",&E.salary);
    return E;
}

void display(struct Employee E)
{
    printf("\nEmployee id : %d\n",E.id);
    printf("Employee name : %s\n",E.name);
    printf("Employee salary : %.2f\n\n",E.salary);
}

void sort_employee_according_to_salary(struct Employee E[5])
{
    // float smallest_salary=E[0].salary;
    int index;
    for(int i=0,j; i<4 ;i++)
    {
    float smallest_salary=E[i].salary;
    index=i;
    for ( j = i+1; j < 5; j++)
    {
        if(smallest_salary > E[j].salary)
        {
            smallest_salary = E[j].salary ;
            index = j;
        }
    }
    struct Employee E_temp = E[index];
    E[index]= E[i];
    E[i]=E_temp;

    }
    
}


int main()
{
    struct Employee E[5];
   // used for input
    for (int i = 0; i < 5; i++)
    {
        E[i]=input();
    }
    
    sort_employee_according_to_salary(E);
    printf("Sort Employee acoording to salary\n");
  //used for display
    for (int i = 0; i < 5; i++)
    {
        display(E[i]);
    }



    return 0;
}