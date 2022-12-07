#include<stdio.h>
int main(){

    int num;
    printf("Enter number to check if divisible by 7 or 3\n");
    scanf("%d",&num);
    if(num%3==0  || num%7==0){
        printf("The number %d is divisible by 3 or 7",num);
    }else{
        printf("The number %d is NOT divisible by 3 or 7",num);
    }
    return 0;
}