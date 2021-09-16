#include<stdio.h>

int main(){
    int i;
    int arr[5] = {10,20,30,40,50};
    int *ptr = &arr;

    printf("\n %u ",ptr); //20930
    printf("\n %d ", *ptr); //10
    printf("\n %d ", *ptr+1); // 11
    for(i = 0; i < 5; i++){
        printf("\n  %u --> %d \n",ptr + i,*(ptr + i));
    }
    return 0;
}