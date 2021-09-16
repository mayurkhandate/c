#include<stdio.h>
#define max 20
int main(){
    int ch,i;
    char string[max];
    do{
        printf("\n 1.Length \n 2.Reverse \n ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            // length of string
            printf("\n Enter your name : ");
            scanf("%s",&string);
            for(i = 0; i < string[i] != '\0';i++);
            printf("\n Length of your string is : %d \n",i);
        break;

        case 2:
            // length of string
            printf("\n Enter your name : ");
            scanf("%s",&string);
            for(i = 0; i < string[i] != '\0';i++);

            // Reverse string
            for(i = i-1; i >= 0; i++){
                printf("%s",string[i]);
            }
        break;
        
        default:
            printf("\n INVALID OPTION ");
            break;
        }
    printf("\n Enter 1 to continue : ");
    scanf("%d",&ch);
    }while (ch == 1);

    return 0;
}