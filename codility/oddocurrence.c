#include<stdio.h>

void solution(int a[],int n){
   
    int i = 0;
    int j = i + 1;

    while(i < n-1 && j < n-1){
        
        if(a[i] == a[j]){
            printf("\n %d",a[i]);
            i = j + 1;
            j = j + 2;
        }
        else{
            break;
        }
    }
    printf("\n \t %d",a[i]);
}

int main(){
    int a[20] ,n,j,temp,i;

    printf("\n Enter the size of the array : ");
    scanf("%d", &n);

    printf("\n Enter elements of the array : ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);  
        temp =a[i];
        j = i-1;
        while (a[j] > temp && j >= 0)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
        
    }

    for(int i = 0; i < n ; i++){
        printf("\t %d ", a[i]);
    }

    solution(a,i);
    
    return 0;
}