#include<stdio.h>

int main(){
    int alpha = 65;

    printf("\n\n------------------Alphabets----------------\n\n");

    while (alpha <= 90){
        printf(" %c %c \t| ", alpha, alpha+32);
        alpha++;
    }
    
    printf("\n\n------------------Thank you----------------\n\n");

    return 0;
}