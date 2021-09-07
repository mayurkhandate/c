#include<stdio.h>

int main(){
    int rno;
    char sname[10];
    int sub1,sub2,sub3;
    float per;

    printf("\n Enter Roll no :");
    scanf("%d", &rno);

    printf("\n Enter student name : ");
    scanf("%s",sname);

    printf("\n Enter Marks of Maths science and computer : ");
    scanf("%d %d %d",&sub1,&sub2,&sub3);

    per = (sub1 + sub2 + sub3) / 3;

    printf("\n---------------------- Student Details ---------------------\n");

    printf("\n \t\t Student Roll no \t: %d \n", rno);
    printf("\n \t\t Student Name \t\t: %s \n", sname);
    printf("\n \t\t Maths Marks \t\t: %d \n", sub1);
    printf("\n \t\t Science Marks \t\t: %d \n", sub2);
    printf("\n \t\t Computer Marks \t: %d \n", sub3);
    printf("\n \t\t Percentage of student \t: %.2f \n", per);

    if(sub1 >= 40 && sub2 >=40 && sub3 >= 40){
        printf("\n \t\t Result \t\t: PASS \n");
        if(per >= 40 && per <= 50){
            printf("\n \t\t Grade \t\t\t: C \n");
        }
        else if (per >= 51 && per <= 75){
            printf("\n \t\t Grade \t\t\t: B \n");
        }
       else if (per >= 76 && per <= 100){
            printf("\n \t\t Grade \t\t\t: A \n");
       }
       
    }
    else{
        printf("\n \t\t Result \t\t: FAIL \n");
    }

    printf("\n\n---------------------- Thank you -----------------------\n\n");


    return 0;
}