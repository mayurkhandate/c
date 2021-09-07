#include<stdio.h>

int main(){
    int r,b,h,area_circle,area_triangle;

    printf("\n Enter base and height : ");
    scanf("%d%d",&b,&h);

    area_circle = 0.5 * b * h;
    printf("\n Area of circle : %d ",area_circle);


    printf("\n Enter radius : ");
    scanf("%d",&r);

    area_triangle = 3.14 * r * r;
    printf("\n Area of Triangle : %d ",area_triangle);

    return 0;
}