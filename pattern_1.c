#include<stdio.h>

int main(){

    int n,k=1;
    int ch=65;
    printf("\n Enter how many rows you want : ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%5c",ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}