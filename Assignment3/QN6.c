#include<stdio.h>
int main(){

    int num1, num2;
    printf("Enter two number to print greater between two numbers\n");
    scanf("%d %d",&num1,&num2);
    if(num1==num2)
    {
        printf("Both numbers %d are same ",num1);
    }
    else if(num1>num2)
    {
        printf("The number %d is greater than %d",num1,num2);
    }
    else{
        printf("The number %d is greater than %d",num2,num1);
    }
    return 0;
}