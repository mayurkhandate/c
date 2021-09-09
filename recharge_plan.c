#include<stdio.h>

int main(){

    char name[20],upi_id[20];
    int ch,mobile_number;
    int bill,amount,sgst,cgst;
    int card_no,card_exp,card_cv;

    printf("\n Enter your Name : ");
    scanf("%s",&name);

    printf("\n Enter your Mobile number ");
    scanf("%d",&mobile_number);

    start:
        do{
            printf("\n\n-----------------------------------------------\n\n");
            printf("\n 1. Purchase plan \n 2. Display Plan \n 3. Bill");
            printf("\n Enter your choice : ");
            scanf("%d",&ch);

            switch (ch)
            {
            case 1:
                // purchase plan
                printf("\n\n --------------- purchase plan------------ \n");
                printf("\n 1. Prepaid plan \n 2. Postpaid plan \n");
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
                            goto payment;
                        }
                        else{
                            printf("\n Enter correct amount \n");
                        }
                    break;

                    case 2:
                        printf("\n Enter Data recharge amount : ");
                        scanf("%d",&amount);
                        if(amount == 199 || amount == 299){
                            goto payment;
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
                            goto payment;
                        }
                        else{
                            printf("\n Enter correct amount");
                        }
                    break;

                    case 2:
                        printf("\n Enter Data recharge amount : ");
                        scanf("%d", &amount);
                        if(amount == 119 || amount == 1181){
                            goto payment;
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
                printf("\n\n -------------Transaction Details--------------\n\n");
                cgst = amount * 0.06;
                sgst = amount * 0.06;
                bill = amount + cgst +sgst;
                printf("\n \t\t Name \t\t\t : %s ",name);
                printf("\n \t\t Mobile number \t\t : %d ",mobile_number);
                printf("\n \t\t Transaction Type \t : VISA");
                printf("\n \t\t Amountb Paid \t\t : %d ",amount);
                printf("\n \t\t CGST \t\t\t : %d ",cgst);
                printf("\n \t\t SGST \t\t\t : %d ",sgst);
                printf("\n \t\t Total Bill \t\t : %d ",bill);
            break;
            
            default:
                printf("\n Invalid option ");
            break;
            }
        
        printf("\n Enter 1 to continue : ");
        scanf("%d",&ch);
        }while (ch == 1);
            printf("\n\n -------------------Thank you-----------------\n\n");
        
    payment:

        printf("\n How you would like do payment ");
        printf("\n 1. VISA \n 2. UPI \n 3. CREDIT CARD \n 4. DEBIT CARD \n");
        printf("\n Enter your choice : ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            // visa
            printf("\n Enter your VISA card number : ");
            scanf("%d",&card_no);
            printf("\n Enter Expiry date : ");
            scanf("%d",&card_exp);
            printf("\n Enter CV number : ");
            scanf("%d",&card_cv);
            printf("\n Prepaid Top up successfull of amount %d by VISA CARD \n",amount);
            goto start;

        break;

        case 2:
            // upi
            printf("\n Enter your UPI ID  : ");
            scanf("%s",&upi_id);
            printf("\n Prepaid Top up successfull of amount %d by UPI \n",amount);
            goto start;

        break;

        case 3:
            // credit card
            printf("\n Enter your CREDIT card number : ");
            scanf("%d",&card_no);
            printf("\n Enter Expiry date : ");
            scanf("%d",&card_exp);
            printf("\n Enter CV number : ");
            scanf("%d",&card_cv);
            printf("\n Prepaid Top up successfull of amount %d by CREDIT CARD \n",amount);
            goto start;
            
        break;

        case 4:
            // debit card
            printf("\n Enter your DEBIT card number : ");
            scanf("%d",&card_no);
            printf("\n Enter Expiry date : ");
            scanf("%d",&card_exp);
            printf("\n Enter CV number : ");
            scanf("%d",&card_cv);
            printf("\n Prepaid Top up successfull of amount %d by DEBIT CARD \n",amount);
            goto start;

        break;
        
        default:
        printf("\n Invalid option ");
        goto start;
        break;
        }


    return 0;
}