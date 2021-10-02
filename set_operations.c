#include<stdio.h>
#define max 5

// wrong 

int main(){
    int n1[max],n2[max],i,copy1[max],copy2[max];

    printf("\n Enter no of elements you want to enter in Array 1 : \n");
    scanf("%d",&n1);
    
    printf("\n Enter elements in array 1: \n");
     for(int i = 0; i < n1; i++){
        scanf("%d",&n1[i]);
    }

    printf("\n Enter no of elements you want to enter in Array 2 : \n");
    scanf("%d",&n2);

    printf("\n Enter elements in array 2: \n");
    for(i = 0; i < n1; i++){
        scanf("%d",&n2[i]);
    }

    for(int j = 0; j < n1; j++){
        if(n1[j] == n1[j+1]){
            continue;
        }
        else{
            copy1[i] = n1[j];
        }
    }

    for(int j = 0; j < n2; j++){

        if(n2[j] == n2[j+1]){
            continue;
        }
        else{
            copy2[i] = n2[j];
        }
    }

    for(int j = 0; j < n2; j++,i++){
        if(copy1[j] == copy2[j])
        {
            continue;
        }
        else{
            copy1[i] = copy2[j];
        }
    }

    printf("\n \t %d \n",copy1);

    return 0;
}