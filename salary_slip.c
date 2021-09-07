#include<stdio.h>

int main(){
    char emp_name[10];
    int emp_id, basic_salary;
    float hra,ta,ma,spa,pf,ptax,gs;


    printf("Enter Employee ID : "); 
    scanf("%d", &emp_id);

    printf("Enter employee Name : ");
    scanf("%s",emp_name);

    printf("Enter Employee Salaray : ");
    scanf("%d", &basic_salary);

    hra = basic_salary * 0.075;
    ta = basic_salary * 0.1;
    ma = basic_salary *  0.05;
    spa = basic_salary * 2.5;
    pf = basic_salary * 1.2;
    gs = hra + ta + ma + spa -  pf;

    printf("\n\n---------------------------EMPLOYEE SALARY SLIP-----------------------\n\n");

    printf("\n \t\t Employee ID \t: %d \n",emp_id);
    printf("\n \t\t Employee Name \t: %s \n",emp_name);
    printf("\n \t\t HRA \t\t: Rs %.2f \n",hra);
    printf("\n \t\t TA \t\t: Rs %.2f \n",ta);
    printf("\n \t\t Ma \t\t: Rs %.2f \n",ma);
    printf("\n \t\t PF \t\t: Rs %.2f \n",pf);
    printf("\n \t\t GS \t\t: Rs %.2f \n",gs);

    printf("\n\n--------------------------------THANK YOU---------------------------------\n\n");


    return 0;
}