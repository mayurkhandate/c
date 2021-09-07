#include<stdio.h>

int main(){
    int emp_id,emp_sal;
    char emp_name[10];
    float pf,hra,ta,gs,tax;

    printf("Enter Employee ID : ");
    scanf("%d",&emp_id);

    printf("Enter Employee Name : ");
    scanf("%s",&emp_name);

    printf("Enter Employee Salary : ");
    scanf("%d",&emp_sal);

    pf = emp_sal * 0.05;
    hra = emp_sal * 0.04;
    ta = emp_sal * 0.03;
    gs = emp_sal + hra + ta - pf;


    printf("\n\n---------------------- Employee Details ---------------------------\n\n");
    printf("\n \t\t Name \t\t: %s ",emp_name);
    printf("\n \t\t ID \t\t: %d ",emp_id);
    printf("\n \t\t Salary \t: %d ",emp_sal);
    printf("\n \t\t PF \t\t: %.2f ",pf);
    printf("\n \t\t HRA \t\t: %.2f ",hra);
    printf("\n \t\t TA \t\t: %.2f ",ta);
    printf("\n \t\t GS \t\t: %.2f ",gs);


    if(gs <= 50000){
        tax = gs * 
    }

    printf("\n\n---------------------- Thank you ---------------------------\n\n");


    return 0;
}