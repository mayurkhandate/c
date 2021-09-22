#include<stdio.h>
#define max 20

int main(){
    int temp;
    int arr[max];
    int n,j;
    printf("\n Enter no of elements you want in array : ");
    scanf("%d",&n);

    printf("\n Enter elements in array : ");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < n; i++){
        
        for(j = n-1; j > 0; j--){
            temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
        }
        
        printf("\n");
        for(int i = 0; i < n; i++){
            printf("%d \t ",arr[i]);
        }
    }

return 0;
}