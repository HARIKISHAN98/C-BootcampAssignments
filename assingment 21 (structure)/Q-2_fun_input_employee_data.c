#include<stdio.h>
#include"Q-1_structure_employee_define.c"
#include"Q-3_fun_display_employee_data.c"
struct Employee input();

struct Employee  input()
{
struct Employee E1;
printf("Enter employee id,name,salary\n");
scanf("%d",&E1.id);
fflush(stdin);
fgets(E1.name,20,stdin);
E1.name[strlen(E1.name)-1]='\0';
scanf("%f",&E1.salary);

return E1;
}

int main()
{
struct Employee E = input();
display(E);

    return 0;
}