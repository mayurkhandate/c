#include<stdio.h>

int main(){
    int product_id,product_quantity;
    char product_name[10];
    float product_price,total,final_total,sgst,cgst;

    printf("Enter product Name : ");
    scanf("%s",&product_name);

    printf("Enter product ID : ");
    scanf("%d",&product_id);

    printf("Enter product price : ");
    scanf("%f",&product_price);

    printf("Enter product quantity : ");
    scanf("%d",&product_quantity);

    total = product_price * product_quantity;
    cgst = total * 0.06;
    sgst = total * 0.06;
    final_total = total + cgst + sgst;

    printf("\n\n-------------------------- BILL ----------------------------\n\n");
    
    printf("\n \t\t Name \t\t : %s ",product_name);
    printf("\n \t\t Id \t\t : %d ",product_id);
    printf("\n \t\t Price \t\t : %d ",product_price);
    printf("\n \t\t Quantity \t : %d ",product_quantity);
    printf("\n \t\t Total \t\t : %.2f ",total);
    printf("\n \t\t SGST \t\t : %.2f ",sgst);
    printf("\n \t\t CGST \t\t : %.2f ",cgst);
    printf("\n \t\t Final Total \t : %.2f",final_total);


    printf("\n\n-------------------------- Thank you ----------------------------\n\n");





    return 0;
}