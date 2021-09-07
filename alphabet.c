#include<stdio.h>

int main(){
    int n, ans;
    int i = 1;

    printf(" \n Enter any numbr : ");
    scanf("%d",&n);

    printf("\n---------------- Table -------------------\n\n");
    while( i <= 10 ){
        ans = n  * i;
        printf("\n \t\t %d  * %d  = %d \n",n,i,ans);
        i++;
    }

printf("\n\n ------------------ Thank you --------------\n\n");

return 0;
}