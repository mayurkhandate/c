#include<stdio.h>
#include<mylib.h>

int main(){
    char string[30];
    int flag;
    int ch;
    int i;
    do{
        printf("\n Enter your string : ");
        scanf("%s",string);
        printf("\n 1.String length \n 2.Pallindrome \n 3.Reverse \n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
        i = stringLen(string);
        printf("\n Length of string is : %d ",i);

        break;
        case 2:
            flag = stringPallindrome(string);
            
            if(flag == 1){
                printf("\n Enter string is a pallindrome");
            }
            else{
                printf("\n Enter String is not a pallindrome ");
            }
            break;
        
        case 3:
            stringReverse(string);
            for (int j = 0; string[j]; j++)
            {
                printf("\t %c",string[j]);
            }
            break;

        default:
            printf("\n INVALID OPTIONS ");
            break;
        }

    printf("\n Enter 1 to continue : ");
    scanf("%d",&ch);
    }while (ch == 1);
        printf("\n ---------------THANK YOU---------- \n");
    
    return 0;
}
















/*
#mylib
int stringLen(char string[]){
    int i;
    for(i = 0; i < string[i] != '\0';i++);

    return i;
}

int stringPallindrome(char string[]){
    int flag = 1,i,j;
    i = stringLen(string)-1;
            
    for (j = 0; j < i; j++ ,i--)
    {
        if(string[i] != string[j])
        {
            flag =0;
            break;
        }
    }
    return flag;
}

void stringReverse(char string[]){   
    int j,i,n=0;
    
    // size of string
    for(i = 0; string[i] != '\0';i++);  
    
    for(j = i-1; j > n; j--,n++){
        char c = string[j];
        string[j] = string[n];
        string[n] = c;
    }
    
}




*/







