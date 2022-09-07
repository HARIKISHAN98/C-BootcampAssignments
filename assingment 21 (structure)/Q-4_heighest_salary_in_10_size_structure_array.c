#include<stdio.h>
#include<string.h>
#include"Q-1_structure_employee_define.c"
// #include"Q-3_fun_display_employee_data.c"
// #include"Q-2_fun_input_employee_data.c"
float Heighest_salary(struct Employee E[5]);

void display(struct Employee E)
{
   printf("\nEmployee id : %d\n",E.id);
   printf("Employee Name : %s\n",E.name);
   printf("Employee Salary : %.2f\n",E.salary);
}

struct Employee  input()
{
struct Employee E;
printf("Enter employee id,name,salary\n");
scanf("%d",&E.id);
fflush(stdin);
fgets(E.name,20,stdin);
E.name[strlen(E.name)-1]='\0';
scanf("%f",&E.salary);

return E;
}

float Heighest_salary(struct Employee E[10])
{
    float heighest_salary = 0;
    for (int i = 0; i < 10; i++)
    {
        if(heighest_salary < E[i].salary)
        heighest_salary = E[i].salary;
    }
    
    return heighest_salary;
}

int main()
{
    struct Employee E[10];

    for (int i = 0; i < 10; i++)
    {
      E[i] = input();
    }
    
    for (int i = 0; i < 10; i++)
    {
        display(E[i]);
    }

printf("\nHeighest salary : %.2f\n",Heighest_salary(E));
    return 0;
}