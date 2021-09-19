#include<stdio.h>

struct student{
    int emp_id;
    char emp_name[20];
    float emp_salary;
}s;

int main(){
    struct student s;

    printf("\n Enter Employee ID : ");
    scanf("%d",&s.emp_id);

    printf("\n Enter Employee Name : ");
    scanf("%s",&s.emp_name);

    printf("\n Enter Employee Salary : ");
    scanf("%f",&s.emp_salary);

    printf("\n\t\t ----------------Employee Details-------------- \t\t\n");

    printf("\n\t\t Employee ID \t\t: %d \n",s.emp_id);
    printf("\n\t\t Employee ID \t\t: %s \n",s.emp_name);
    printf("\n\t\t Employee ID \t\t: %.2f \n",s.emp_salary);


    return 0;
}