#include<stdio.h>

int main(){
    int a,b,c;
    printf("\n Enter any three number : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a > b && a > c ){
        printf("\n A is greater : %d ", a);
    }

    else if( b > a && b >c){
        printf("\n B is greater : %d ", b);
    }

    else if(c > a && c > b)
    {
        printf("\n C is greater : %d ",c);
    }

    else{
        printf("\n all numbers are same .");
    }

    return 0;
}