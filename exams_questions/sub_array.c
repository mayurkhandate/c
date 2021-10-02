/*
Write a program to find if there is a sub-array with sum equal to zero? 
Please print the start and end of the array index. Input array = [4, 2, -3, 1, 6]
Output will be: There is a sub-array with zero sum from index 1 to 3.
*/

#include<stdio.h>
int main()
{
    int n,k;

    printf("\n Enter no of element you want in array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < n; i++){

        for(int j = n - 1; j > i; j--){

            int sum = 0;
            k = i;

            while (j >= k)
            {
                sum = sum + arr[k];
                k++;
            }
            
            if(sum == 0){
                printf("\n Sub array found between %d and %d ",i,j);
                break;
            }
        }

    }

    return 0;
}












/*
logic 1 
int main()
{
    int arr[max] = {4, 2, -3, 1, 6};

    for(int i = 0; arr[i] != 0; i++){

        for(int j = i + 1 ; arr[j] != 0; j++){
            if(arr[i] + arr[j] == 0){
                printf("%d \t %d",arr[i],arr[j]);
            }
            else if  (arr[i] + arr[j] + arr[j+1] == 0)
            {
                 printf("%d \t %d \t %d",arr[i],arr[j],arr[j+1]);
            }
            
        }

    }

    return 0;
}

*/