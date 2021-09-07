#include<stdio.h>

int main(){
    int n;
    printf("Enter any number ");
    scanf("%d",&n);

    if(n > 0){
        printf("\n Number : %d", n);
    }
    else{
        n = -n;
        printf("\n Number : %d", x);
    }
    return 0;
}