#include<stdio.h>

void factor();
void factorial(int);
int prime(int);

void factor(){
// function without arguments and return type
    int i,n;
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
}

void factorial(int nn){
    // function with arguments without return type
    int temp = nn;
    int ans = 1;
    while(nn != 0){
        ans *= nn;
        nn=nn-1;
    }
    printf("\n %d Factorial is : %d \n",temp,ans);
}

int prime(int n1){
    // function with arguments with return type
    int i;
    int flag = 1;
    for(i = 2; i <= n1/2; i++){
        if(n1 % i == 0){
            flag = 0;
            break;
        }
    }
    return flag;
}

int main(){

factor();

int nn;
printf("\n Enter no you want to find factorial : ");
scanf("%d",&nn);
factorial(nn);

int n1;
printf("\n Enter no to check whether a no is prime or not : ");
scanf("%d",&n1);
int flag = prime(n1);
if(flag){
    printf("\n %d is a prime no. \n",n1);
}
else{
    printf("\n %d not a prime no. \n",n1);
}

return 0;
}