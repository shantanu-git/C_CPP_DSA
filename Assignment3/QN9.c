#include<stdio.h>
int main(){

    int num1, num2, num3;
    printf("Enter three number to print greater between among numbers\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>=num2)
    {
        if(num1>num3)
            printf("number %d is greatest among all given number ",num1);
        else
            printf("The number %d is greatest",num3);
    }
    else if(num1<=num2)
    {
        if(num2<num3)
            printf("The number %d is greater ",num3);
        else
            printf("The number %d is greater ",num2);
    }
    return 0;
}