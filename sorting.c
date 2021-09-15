#include<stdio.h>
#define max 10
int main(){
    int i,j,temp,n,ch,search;
    int a[max];
    int flag = 0;

    do
    {
        printf("\n 1.Create Array \n 2.Display Array \n 3.Sort Array \n 4.Search \n 5.Insertion \n 6.Delete \n");
        printf("\n Enter your choice : ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            // Create array
            printf("\n How many numbers you want to enter in array : ");
            scanf("%d",&n);
            printf("\n Enter elements in array : ");
            for(i = 0; i < n; i++){
                scanf("%d",&a[i]);
            }
        break;

        case 2:
            // display
            for(i = 0; i < n; i++){
                printf("\t %d ",a[i]);
            }
        break;

        case 3:
            // sort array
            for(i = 0; i < n; i++){
                for(j = i + 1; j < n; j++){
                    if(a[i] > a[j]){
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }
        break;

        case 4:
            // searching in array 
            printf("\n Enter Element you want to search in array : ");
            scanf("%d",&search);
            for(i = 0; i < n; i++){
                if(a[i] == search){
                    flag = 1;
                    break;
                }
            }
            if(flag){
                printf("\n %d Element found",search);
            }
            else{
                printf("\n Elemnent not found ");
            }
        break;

        case 5:
            // inserting
        break;

        case 6:
        // delete 
        break;
        
        default:
            printf("\n INVALID OPTION");
        break;
        }

        printf("\n Enter 1 to continue : "); 
        scanf("%d",&ch);
    } while (ch == 1);
        printf("\n------Thank you---------");    

    return 0;
}