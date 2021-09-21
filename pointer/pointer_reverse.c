#include<stdio.h>

char p[30];
char * stringReverse(char string[]){   
    int i,n;
    
    // size of string
    for(i = 0; string[i] != '\0';i++);

    // Reverse string
    int j=0;
    for(n = i-1; n >= 0; n--){
        p[j] = string[n];
        j++;
    }  
    p[j]='\0';

     return p;
}

int main(){

    char string[30];
    
    printf("\n Enter your string : ");
    scanf("%s",string);
    
    char *result = stringReverse(string);
        for (int j = 0; result[j]; j++)
        {
            printf("\t %c",*(result+j));
        }
}