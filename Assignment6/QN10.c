/* Write a program to reverse a given number */
#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d",&num);
    int rev=0,remainder;
    while(num>0){
        remainder = num%10;
        rev = rev*10+remainder;
        num = num/10;
    }
    printf("rev is %d",rev);
    return 0;
}