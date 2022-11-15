#include<stdio.h>
int main()
{
    int num,sumOfDigits=0;
    printf("Enter number to get sum of its digits\n");
    scanf("%d",&num);
    
    while(num>0){
        sumOfDigits += num%10;
        num = num/10;
    }
    printf("Sum of its digits is %d",sumOfDigits);
    return 0;
}