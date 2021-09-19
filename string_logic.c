#include<stdio.h>
#define max 20
int main(){
    int ch,i,j,n;
    char string[max];
    char s1[max],s2[max],concat[max];
    do{
        printf("\n 1.Length \n 2.Reverse \n 3.Upper Case \n 4.pallindrome \n 5.concat \n 6.greater string \n 7.copy string \n\n");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            // length of string
            printf("\n Enter your string : ");
            scanf("%c",&string);
            for(i = 0; i < string[i] != '\0';i++);
            printf("\n Length of your string is : %d \n",i);
        break;

        case 2:
            // length of string
            printf("\n Enter your string : ");
            scanf("%s",&string);
            for(i = 0; i < string[i] != '\0';i++);

            // Reverse string
            for(n = i-1; n >= 0; n--){
                printf("%c",string[n]);
            }
        break;

        case 3:
            // upper case
            printf("\n Enter your string : ");
            scanf("%s",&string);
            printf("\n Original String : %s ",string);
            i = 0;
            while (string[i] != '\0')
            {
                if(string[i] > 91 && string[i] < 122)
                {
                    string[i] -= 32; 
                    i++;
                }
            }
            printf("\n Upper Case ---> %s ",string);
        break;

        case 5:
        // concat
            printf("\n Enter your string 1: ");
            scanf("%s",&s1);
            printf("\n Enter your string 2: ");
            scanf("%s",&s2);

            printf("\n String 1 : %s \n",s1);
            printf("\n String 2 : %s \n",s2);

            // concat = s1 + s2;
            // printf("\n concat string 1 and string 2 : %s \n",(s1 + s2));
            
        break;

        case 6:
        // greater 
            printf("\n Enter your string 1: ");
            scanf("%s",&s1);
            printf("\n Enter your string 2: ");
            scanf("%s",&s2);

            printf("\n String 1 : %s",s1);
            printf("\n String 2 : %s",s2);

            for(i = 0; i < s1[i] != '\0';i++);
            for(j = 0; i < s2[j] != '\0';j++);
            
            if( i > j){
                printf("\n STRING 1 %s is greater \n",s1);
            }
            else{
                printf("\n STRING 2 %s is greater \n",s2);
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