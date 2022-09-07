// #include"Q-1_structure_employee_define.c"
#include<string.h>

void display(struct Employee E2)
{
   printf("\nEmployee id : %d\n",E2.id);
   printf("Employee Name : %s\n",E2.name);
   printf("Employee Salary : %.2f\n",E2.salary);
}