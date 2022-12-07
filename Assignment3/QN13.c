#include<stdio.h>
int main(){

    int num;
    printf("Enter number to check if divisible by 3 and 2 both \n");
    scanf("%d",&num);
    if(num%3==0 && num%2==0){
        printf("The number %d is divisible by 3 and 2 both",num);
    }else{
        printf("The number %d is NOT divisible by 3 and 2 both",num);
    }
    return 0;
}