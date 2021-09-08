#include<stdio.h>
#define max 20

int main(){
    int mat[max][max];
    int r,c,i,j,n;
    int ch;
    do{
        printf("1. Create matrix \n 2. Display matrix \n 3. Addition of Matrix");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\n Enter how many rows you want : ");
            scanf("%d",&r);

            printf("\n Enter how many columns you want : ");
            scanf("%d",&c);

            for(i = 0; i < r; i++){
                for(j = 0; j < c; j++){
                    scanf("%d", &mat[i][j]);
                }
                printf("\n");
            }
        break;

        case 2:
            for(i = 0; i < r; i++){
                for(j = 0; j < c; j++){
                    printf("%5d",mat[i][j]);
                }
                printf("\n");
            }
        break;

        case 3: 

        break;
        
        default:
            printf("Invalid option ");
        break;
        }
        
        printf("\n Enter 1 to continue : ");
        scanf("%d",&ch);
    }
    while (ch == 1);
        printf("Thank you");
    

    return 0;
}