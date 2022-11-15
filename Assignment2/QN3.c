#include<stdio.h>
int main()
{
    int firstNum,secNum;
    printf("Enter two number to swap the value\n");
    scanf("%d %d",&firstNum,&secNum);
    int temp = firstNum;
    firstNum= secNum;
    secNum = temp;
    printf("first Number is %d and second number is %d",firstNum,secNum);
    return 0;
}