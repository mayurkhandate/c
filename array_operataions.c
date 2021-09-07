#include<stdio.h>
#define max 20
int main(){
    int i,ch,s,n,ch1,newval,loc,val;
    int arr[max];
    int flag = 0;
    do{
        printf("1. Create \n2. Display \n3. Search \n4. Sort \n5. Insert \n6. Delete \n");
        printf("\n Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n Enter how many number you wants to add in array : ");
            scanf("%d",&n);
            printf("\n Enter numbers in array : ");
            for(i = 0; i < n; i++){
                scanf("%d", &arr[i]);
            }

        break;

        case 2:
            printf("\n Elements in array are : ");
            for(i = 0; i < n; i++){
                printf(" %5d", arr[i]);
            }        
        break;

        case 3:
            printf("\n Enter no you want to search in the array : ");
            scanf("%d", &s);
            for(i = 0; i < n; i++){
                if(s == arr[i]){
                    flag = 1;
                    break;
                }
                if(flag){
                    printf("\n %d Element found.",s);
                }
                else{
                    printf("Element not found.");
                }
            }
        break;

        case 4:
        break;

        case 5:
            printf("\n Enter new value and location : ");
            scanf("%d%d",&newval, &loc);
            for(i = n-1; i >= loc-1; i--){
                arr[i+1] = arr[i];
            }
            arr[loc-1] = newval;
            n++;
            printf("\n New value inserted at %d location ",loc);
        break;

        case 6:
            printf("\n Enter location to delete value from array : ");
            scanf("%d",&loc);
            newval = arr[loc -1];
        
            for( i = loc-1; i < n ; i++){
                arr[i] = arr[i+1];
            }
            printf("\n %d value is deleted from the location ",loc);
            n--;
        break;

        default:
            printf("INVALID");
        break;
        } 
        printf("\n Enter 1 to continue : ");
        scanf("%d", &ch1);
        
   }while (ch1==1);
    printf("----------------Thank you------------------");
    return 0;
}