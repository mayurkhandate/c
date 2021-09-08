#include<stdio.h>
#define max 20

int main(){
    int mat1[max][max],mat2[max][max],mat3[max][max],mat4[max][max];
    int r1,c1,i,j,r2,c2;
    int ch,ch2;
    do{
        printf("\n 1. Create matrix \n 2. Display matrix \n 3. Addition of Matrix \n 4. Multliplication of Matrix \n");
        printf("\n Enter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\n Enter how many rows you want for matrix 1 : ");
            scanf("%d",&r1);

            printf("\n Enter how many columns you want for matrix 1 : ");
            scanf("%d",&c1);

            for(i = 0; i < r1; i++){
                for(j = 0; j < c1; j++){
                    scanf("%d", &mat1[i][j]);
                }
                printf("\n");
            }

            printf("\n Enter how many rows you want for matrix 2 : ");
            scanf("%d",&r2);

            printf("\n Enter how many columns you want for matrix 2 : ");
            scanf("%d",&c2);

            for(i = 0; i < r2; i++){
                for(j = 0; j < c2; j++){
                    scanf("%d", &mat2[i][j]);
                }
                printf("\n");
            }

        break;

        case 2:

            printf("\n 1. Matrix display \n 2. Matrix Addition \n 3. Matrix Mulitplication \n ");
            printf("\n Enter your choice : ");
            scanf("%d", &ch2);

            switch (ch2)
            {
            case 1:
                printf("\n\n -------------Matrix 1------------- \n\n");
                for(i = 0; i < r1; i++){
                    for(j = 0; j < c1; j++){
                        printf("%5d",mat1[i][j]);
                    }
                    printf("\n");
                }

                printf("\n\n -------------Matrix 2------------- \n\n");
                for(i = 0; i < r1; i++){
                    for(j = 0; j < c1; j++){
                        printf("%5d",mat2[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                printf("\n\n ------------Matrix Addition-------- \n\n");
                for(i = 0; i < r1; i++){
                    for(j = 0; j < c1; j++){
                        printf("%5d",mat3[i][j]);
                    }
                    printf("\n");
                }
            break;

            case 3:
                 printf("\n\n -------------- Matrix Multiplication----------- \n\n");
                for(i = 0; i < r1; i++){
                    for(j = 0; j < c1; j++){
                        printf("%5d",mat4[i][j]);
                    }
                    printf("\n");
                }
            break;
            
            default:
                printf("\n INVALID CHOICE ");
            break;
            }
        break;

        case 3: 
            if(mat1[r1][c1] == mat2[r2][c2]){
                for(i = 0; i < r1; i++){
                    for(j = 0; j < c1; j++){
                        mat3[i][j] = mat1[i][j] + mat2[i][j];
                    }
                    printf("\n");
                }
            }
        break;
        

        case 4: 
            if(mat1[r1][c1] == mat2[r2][c2]){
                for(i = 0; i < r1; i++){
                    for(j = 0; j < c1; j++){
                        mat4[i][j] = mat1[i][j] * mat2[i][j];
                    }
                    printf("\n");
                }
            }
        break;

        default:
            printf("\n Invalid option ");
        break;
        }
        
        printf("\n Enter 1 to continue : ");
        scanf("%d",&ch);
    }
    while (ch == 1);
        printf("\n\n ------------Thank you-----------\n\n");
    

    return 0;
}