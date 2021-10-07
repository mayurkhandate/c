/*
 Write a program to print most duplicate characters in a string? 
 Input = "aaaaaaaaaaaaaaaaabbbbcddddeeeeee" Output = Most duplicate character is 'a' 
 and count is <<no. of times a occurs>>
*/

#include<stdio.h>


int main(){
    int counter = 1,j,string;
    printf("\n Enter string to find most dupilcate characters : ");
    scanf("%s",&string);
    char arr[string]; 


    for(int i = 0; arr[string] != '\0'; i++){
        for( j = i+1; arr[string] != '\0'; j++){
            if(arr[j] == arr[i]){
            counter++;
            }
        }
         printf("\n \t char = %c \t , count = %d ",arr[i],counter);
    }
    
    return 0;
}