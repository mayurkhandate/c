#include<stdio.h>
#define max 30

int main(){
    int copy_string[max];  
    int i,j,k; 
    int arr[] = {3,2,1,4,7};
    int arr2[] = {3,2,1,2,7};
    
    for(i = 0; arr[i] != '\0';i++);


    for(j = 0,k=0; j < i; j++){
        if(arr[j] == arr2[j]){
            copy_string[k] = arr[j];
            k++;
        }
    }
    
    printf("\n\n After Removing duplicate : %d \n\n",copy_string);
    
    
    return 0;
}