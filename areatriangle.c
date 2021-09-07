#include<stdio.h>

int main(){
    float b,h,r;
    printf("\nEnter breadth and height");
    scanf("%f%f", &b,&h);
    r = 0.5 * b * h;
    printf("\nArea of triangle : %.2f", r);

    return 0;
}