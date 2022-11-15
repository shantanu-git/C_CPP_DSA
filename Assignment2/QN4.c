#include<stdio.h>
int main()
{
    int firstNum,secNum;
    printf("Enter two number to swap the value without using temp variable\n");
    scanf("%d %d",&firstNum,&secNum);
    printf("first Number is %d and second number is %d",(firstNum*secNum)/firstNum,(firstNum*secNum)/secNum);
    return 0;
}