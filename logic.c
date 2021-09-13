#include<stdio.h>

int main(){

    int i,result,n,ch,pow;
    int ans = 1;

    do{
        printf("\n 1.Prime \n 2.Factor \n 3.Even \n 4.Fibbo \n 5.Palladrone \n 6.Perfect No \n 7.Armstrong \n 8.Power \n 9.Reverse number \n 10.Factorial \n");
        printf("\n Enter your choice : ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            printf("\n Enter no to check whether a no is prime or not : ");
            scanf("%d",&n);
            int flag = 1;
            for(i = 2; i <= n/2; i++){
                if(n % i == 0){
                    flag = 0;
                    break;
                }
            }
            if(flag){
                printf("\n %d is a prime no. \n",n);
            }
            else{
                printf("\n %d not a prime no. \n",n);
            }
        break;

        case 2:
        printf("\n Enter no you want to find factors : ");
        scanf("%d",&n);
            for(i = 2; i <= n/2; i++){
                if(n % i == 0){
                    printf("\n The factors of %d is %d ",n,i);
                }
                else{
                    printf("\n %d not have factors : ",n);
                }
            }
        break;

        case 3:
        printf("\n Enter no to find even no : ");
        scanf("%d",&n);
            if(n % 2 == 0){
                printf("\n %d is a Even no. ", n);
            }
            else{
                printf("\n %d is not a even no. ",n);
            }
        break;

        case 4:
            printf("\n Enter no till you want fibbo series : ");
            scanf("%d",&n);
            int n1 = 0, n2= 1;
            for(i = 0; i < n; i++){
                result = n1 + n2;
                printf("\t %d ", result);
                n1 = n2;
                n2 = result;
            }
        break;

        case 5:
            printf("\n Enter number to check if the no is pallandrome or not : ");
            scanf("%d",&n);
            int temp1 = n;
            int rem1;
            int sum1;
            while( n > 0){
                rem1 = n % 10;
                sum1 = (sum1 * 10) + rem1;
                n /= 10;
            }
            if(sum1 == temp1){
                printf("\n %d is a pallandrome ",temp1);
            }
            else{
                printf("\n %d is not a pallandrome ",temp1);
            }
        break;

        case 7:
            printf("\n Enter no you want to check armstrong : ");
            scanf("%d",&n);
            int temp = n;
            int rem;
            int sum = 0;
            while (n > 0)
            {
                rem = n % 10;
                sum += rem * rem * rem;
                n /= 10;
            }
            if(sum == temp){
                printf("\n %d is an armstrong number ",temp);
            }
            else{
                printf("\n %d is not an armstrong number ",temp);
            }
        break;

        case 8:
            printf("\n Enter base and power : ");
            scanf("%d%d",&n,&pow);
            result = n * pow;
            printf("\n %d ", result);
        break;

        case 9:
            printf("\n Enter number to reverse : ");
            scanf("%d",&n);
            while (n > 0)
            {
                rem = n % 10;
                printf("\t %d ",rem);
                n /= 10;
            }
            
        break;

        case 10:
        printf("\n Enter no you want to find factorial : ");
        scanf("%d",&n);
            for(i = 1; i <= n; i++){
                ans *= i;
            }
            printf("\n %d Factorial is : %d \n",n,ans);

        break;

        default:
            break;
        }
    printf("\n\n Enter 1 to continue : ");
    scanf("%d",&ch);
    }while (ch);
        printf("\n Thank you ");
    
    return 0;
}