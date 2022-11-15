#include<stdio.h>
int main()
{
    int number;
    printf("Enter 3 digit number\n");
    scanf("%d",&number);
    int lastDigit = number%10;
    number = number/10;
    number = lastDigit*100+number;
    printf("Rotated number is %d",number);
    return 0;
}