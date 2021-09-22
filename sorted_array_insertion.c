#include <stdio.h>
#define max 20
int main()
{
    int a[20], n, item, i;

    printf("Enter the size of the array");

    scanf("%d", &n);

    printf("Enter elements of the array ");

    for (i = 0; i < n; i++)

    {
        scanf("%d", &a[i]);
        for(int j = 1; j < n-1; j++){
            if(a[i] > a[j]){
                
            }
        }
    }


    

   

    for (i = 0; i < n; i++)

    {

        printf("\n \t %d", a[i]);
    }

    return 0;
}