#include <stdio.h>
#define max 20

int main()
{
    int a[20] ,n,j,temp;

    printf("\n Enter the size of the array : ");
    scanf("%d", &n);

    printf("\n Enter elements of the array : ");

    for (int i = 0; i < n; i++)
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

    return 0;
}