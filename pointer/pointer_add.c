#include<stdio.h>

int main(){
    int a,b,c;
    int *p,*q;

    // p = &a;
    // q = &b;

    printf("\n Enter value of a : ");
    scanf("%u",p);

    printf("\n Enter value of b : ");
    scanf("%u",q);

   

    c = *p + *q;

    printf("\n Addition = %d",c);
    return 0;
}