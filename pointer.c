#include<stdio.h>


int main(){
    int n = 10;
    int *p;

    printf("\n p address = %d \n ",&p);
    printf("\n p value = %d \n ",p);

    p = &n;

    printf("\n value of n using pointer  = %d \n", *p);
    printf("\n address of n using pointer = %u \n ", p);

    return 0;
} 