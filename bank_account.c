#include<stdio.h>

int main(){
    int account_no,months,account_balance;
    float interest_rate,total,intramt,finalbal;
    char customer_name[10];

    printf("\n Enter Account no : ");
    scanf("%d",&account_no);

    printf("\n Enter Account Name : ");
    scanf("%s",&customer_name);

    printf("\n Enter Account Balance : ");
    scanf("%d",&account_balance);

    printf("\n Enter Total no of months : ");
    scanf("%d",&months);

    printf("\n Enter Interest Rate per month : ");
    scanf("%f",&interest_rate);

    total = account_balance * months;
    intramt = total * interest_rate;
    finalbal = total + intramt;

    printf("\n\n--------------------------Account Details--------------------------\n\n");

    printf("\n \t\t Account no \t\t: %d",account_no);
    printf("\n \t\t Account Name \t\t: %s",customer_name);
    printf("\n \t\t Account Balance \t: %d",account_balance);
    printf("\n \t\t No of Months \t\t: %d",months);
    printf("\n \t\t Total Amount \t\t: %.2f",total);
    printf("\n \t\t Bank Interest Rate \t: %.2f",interest_rate);
    printf("\n \t\t Interest Amount \t: %.2f",intramt);
    printf("\n \t\t Final Total \t\t: %.2f",finalbal);

    printf("\n\n--------------------------Thank you--------------------------\n\n");


    return 0;
}