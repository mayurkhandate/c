#include<stdio.h>

struct student{
    char name[20];
    int roll_no;
    float percentage;
};

int main(){
    int n;
    printf("\n Enter no of students you want to add details: ");
    scanf("%d",&n);
    struct student s[n];

    for(int i = 0; i < n; i++){
        printf("\n Enter student Name  %d : ",i+1);
        scanf("%s",&s[i].name);

        printf("\n Enter student Roll No %d : ",i+1);
        scanf("%d",&s[i].roll_no);
  
        printf("\n Enter student Percentage %d: ",i+1);
        scanf("%f",&s[i].percentage);
    }

    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            if(s[i].percentage > s[j].percentage){
                struct student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }


    for(int i = n-1; i >= 0; i--){
        printf("\n\n-------------------student %d Markhet---------------\n\n",i+1);
        printf("\n \t\t Stduent Roll No \t: %d \n", s[i].roll_no);
        printf("\n \t\t Stduent Name \t\t: %s \n", s[i].name);
        printf("\n \t\t Stduent Percentage \t: %f \n", s[i].percentage);
    }
    return 0;
}