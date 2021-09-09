#include<stdio.h>

int main(){
    char ca;

    printf("\n Enter any char to check vowel : ");
    scanf("%c",&ca);

    if( ca == 'a' || ca == 'e' || ca == 'i' || ca == 'o' || ca == 'u'){
        printf("\n Entered char is a vowel ");
    }

    else if(ca =='A' || ca == 'E' || ca == 'I' || ca == 'O' || ca == 'U'){
        printf("\n Entered char is a vowel");
    }

    else{
        printf("\n Entered char is other char");
    }

    return 0;
}