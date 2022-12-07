#include<stdio.h>
int main(){

    int num;
    printf("Enter number to check if divisible by 5 \n");
    scanf("%d",&num);
    if(num%5==0){
        printf("The number %d is divisible by 5",num);
    }else{
        printf("The number %d is NOT divisible by 5",num);
    }
    return 0;
}