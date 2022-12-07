#include<stdio.h>
int main(){

    int num;
    printf("Enter number to check if even or odd \n");
    scanf("%d",&num);
    if(num%2==0){
        printf("The number %d is even",num);
    }else{
        printf("The number %d is odd",num);
    }
    return 0;
}