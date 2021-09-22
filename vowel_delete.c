#include<stdio.h>
#define max 30

int main(){
    char string[max],copy_string[max];  
    int i,j,k; 
    
    char temp;
    printf("\n Enter string : ");
    scanf("%s",&string);
    printf("\n Original string : %s ",string);
  
    for(i = 0; string[i] != '\0'; i++);

    for(j = 0,k=0; j < i; j++){
        if(string[j] == 'a' || string[j] == 'e' || string[j] == 'i' || string[j] == 'o' || string[j] == 'u' || string[j] =='A' || string[j] == 'E' || string[j] == 'I' || string[j] == 'O' || string[j] == 'U'){
            continue;
        }
        else{
            copy_string[k] = string[j];
            k++;
        }
    }
    printf("\n\n After Removing Vowels : %s \n\n",copy_string);
    
    return 0;
}