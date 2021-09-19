#include<stdio.h>

void circle_area();
void circle_area1(float);

// function without argument 
void circle_area(){
    float area,r;
    printf("\n Entre value of r : ");
    scanf("%f",&r);
    area = 3.14f * r * r;
    printf("\n Area = %.2f",area);
}

// function with arguments  without return type

void circle_area1(float r1){
    float area;
    area = 3.14f * r1 * r1;
    printf("\n Area = %.2f",area);
}


int main(){
    circle_area();
    float area,r1;
    printf("\n Entre value of r : ");
    scanf("%f",&r1);
    circle_area1(r1);
    return 0;
}