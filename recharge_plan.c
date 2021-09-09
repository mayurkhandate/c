#include<stdio.h>

int main(){

    char name[20];
    int ch;
    int amount;

    do{
        printf("\n 1. Purchase plan \n 2. Display Plan \n 3. Bill");
        printf("\n Enter your choice : ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            // purchase plan
            printf("\n\n --------------- purchase plan------------ \n");
            printf("\n 1.Prepaid plan \n 2. Postpaid plan \n");
            printf("\n Enter your choice : ");
            scanf("%d",&ch);
            switch (ch)
            {
            case 1:
                // prepaid plan purchase 
                printf("\n 1. Top up \n 2. Data plan \n");
                printf("\n Enter your choice : ");
                scanf("%d",&ch);
                switch (ch)
                {
                case 1:
                    printf("\n Enter Top up recharge amount : ");
                    scanf("%d",&amount);
                    if(amount == 69 || amount == 79){
                        printf("\n Prepaid Top up successfull of amount %d ",amount);
                    }
                    else{
                        printf("\n Enter correct amount \n");
                    }
                break;

                case 2:
                    printf("\n Enter Data recharge amount : ");
                    scanf("%d",&amount);
                    if(amount == 199 || amount == 299){
                        printf("\n Prepaid Data plan succefull of amount %d ",amount);
                    }
                    else{
                        printf("\n Enter correct amount \n");
                    }
                break;

                default:
                printf("\n Invalid option");
                break;
                }
            break;

        // --------------------------------------
            case 2:
                // postpaid plan purchase 
                printf("\n 1. Top up \n 2. Data plan \n");
                printf("\n Enter your choice : ");
                scanf("%d",&ch);
                switch (ch)
                {
                case 1:
                    printf("\n Enter Top up recharge amount : ");
                    scanf("%d",&amount);
                    if(amount == 99 || amount == 599){
                        printf("\n Postpaid Top up successfull of amount %d ",amount);
                    }
                    else{
                        printf("\n Enter correct amount");
                    }
                break;

                case 2:
                    printf("\n Enter Data recharge amount : ");
                    scanf("%d", &amount);
                    if(amount == 119 || amount == 1181){
                        printf("\n Postpaid Data plan succefull of amount %d ",amount);
                    }
                    else{
                        printf("\n Enter correct amount");
                    }
                break;

                default:
                printf("\n Invalid option");
                break;
                }
            break;

            default:
            printf("\n Invalid option ");
            break;
            }
        break;

        case 2:
            // display plan
            printf("\n\n--------------Display plan ----------------\n\n");
            printf("\n 1.Prepaid plan \n 2. Postpaid plan \n");
            printf("\n Enter your choice : ");
            scanf("%d",&ch);
            switch (ch)
            {
            case 1:
                // preapaid plan display 
                printf("\n prepaid plan");
                printf("\n 1. Top up \n 2. Data plan \n");
                printf("\n Enter your choice : ");
                scanf("%d",&ch);
                switch (ch)
                {
                case 1:
                    printf("\n Top up Plans are : ");
                    printf("\n Top up plan 1 : 69");
                    printf("\n Top up plan 2: 79 ");
                break;

                case 2:
                    printf("\n  Data recharge plans are : ");
                    printf("\n Data plan 1 : 199");
                    printf("\n Data plan 2: 299 ");
                break;

                default:
                    printf("\n Invalid option");
                break;
                }
            break;
            
            case 2:
                // postpaid display plan
                printf("\n postpaid plan ");
                printf("\n 1. Top up \n 2. Data plan \n");
                printf("\n Enter your choice : ");
                scanf("%d",&ch);
                switch (ch)
                {
                case 1:
                    printf("\n Top up Plans are : ");
                    printf("\n Top up plan 1 : 99");
                    printf("\n Top up plan 2: 599 ");
                break;

                case 2:
                    printf("\n Data recharge plans are : ");
                    printf("\n Data plan 1 : 119");
                    printf("\n Data plan 2: 1181");
                break;

                default:
                    printf("\n Invalid option");
                break;
                }
            break;

            default:
                printf("\n Invalid option ");
            break;
            }
        break;

        case 3:
            // calculate bill
            printf("\n\n -------------Total bill--------------\n\n");
        break;
        
        default:
            printf("\n Invalid option ");
        break;
        }
    
    printf("\n Enter 1 to continue : ");
    scanf("%d",&ch);
    }while (ch == 1);
        printf("\n ---------------Thank you-----------------\n");
    


    return 0;
}