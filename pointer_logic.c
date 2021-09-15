#include<stdio.h>

int main(){
    int n = 10;
    int *p = &n;
    int **q = &p;

    printf("\n\n -------------Using n-------------- \n\n");
    printf("\n value of n using n : %d ",n);
    printf("\n Address of n using n : %d ",&n);

    printf("\n\n -------------Using p-------------- \n\n");
    printf("\n value of n using p : %d ",*p);
    printf("\n Address of n using p : %u ",p);

    printf("\n\n -------------Using q-------------- \n\n");
    printf("\n value of n using q : %d ",**q);
    printf("\n Address of n using q : %u ",*q);

    printf("\n\n -------------Using q-------------- \n\n");
    printf("\n Address of q using q : %u ",&q);
    
    return 0;
}