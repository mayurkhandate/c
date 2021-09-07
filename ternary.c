#include<stdio.h>

int main(){
     
    //  int a = 5;
    //  int b = 6;
    //  int c = 8;

    //  int z = a < b ? (a > c ? a:c) : (b >c ? b : c);

    // printf("Greater no : %d ",z);



    int x = 1;
    int y = 1;
     
     int a = x++ + x++ + x++ + x++ + x++;
     int b = ++y + ++y + ++y + ++y + ++y;

     printf("\n a = %d",a);
     printf("\n b = %d",b);
     
     printf("\n x = %d",x);
     printf("\n y = %d",y);


    return 0;

}