#include<stdio.h>

int main(){

    int cus_no;
    int unit;
    float total,final_total,total2;
    char name[10];

    printf("\n Enter Customer No : ");
    scanf("%d", &cus_no);

    printf("\n Enter customer name : ");
    scanf("%s", &name);

    printf("\n Enter Total Unit : ");
    scanf("%d", &unit);

    if(unit < 100){
        final_total = unit * 3.44;
    }

    else if(unit >= 101 && unit <= 300){
        total = 100 * 3.44;
        final_total = total + (unit - 100) * 7.34;
    }

    else if(unit >= 301 && unit <= 500){
        total = 100 * 3.44;
        total2 = 200 * 7.34;
        final_total = total + total2+ (unit - 300) * 10.36;
    }

    printf("\n\n ---------------------Electricity Bill----------------------\n\n");
    printf("\n \t\t Bill No \t\t: %d \n", cus_no);
    printf("\n \t\t Customer Name \t\t: %s \n", name);
    printf("\n \t\t Total Unit Used \t: %d \n", unit);
    printf("\n \t\t Totall Bill \t\t: %.2f \n",final_total);
    printf("\n\n ---------------------Thank you----------------------\n\n");


    return 0;
}