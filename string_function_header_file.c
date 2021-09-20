#include<stdio.h>

char * stringLen(char string[]){   
    int i,n;
    char *result = &string;

    for(i = 0; i < string[i] != '\0';i++);

    // Reverse string
    for(n = i-1; n >= 0; n--){
        result[n] = string[n];
    }  
     return result;
}

int main(){
    char string[30];
    char *result = &string;
    printf("\n Enter your string : ");
    scanf("%s",&string);
    result = stringLen(string);
    printf("String is : %s ",result);
    return 0;
}