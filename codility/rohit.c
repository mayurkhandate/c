#include<stdio.h>

int main ()
{
int i,j,n,temp;
printf("Declare the size of array : ");
scanf("%d",&n);

int arr[n];

for(int i=0;i<n;i++){
printf("Enter the %d element of array : ",i);
scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }
    }
}

printf("\nSorted array is : ");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}

i=0;
j=i+1;

while(i<n-1  && j<n-1){
    if( arr[i]==arr[j]){
        i=i+1;
        j=j+2;
    }
    else {
        break;
    }
}
printf("\n%d\n",arr[i]);
return 0;
}