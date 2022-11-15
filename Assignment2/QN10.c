#include<stdio.h>
int main()
{
    int num, digit;
    printf("Enter the number and a digit to add to number\n");
    scanf("%d %d",&num,&digit);
    num = (num*10)+digit;
    printf("%d",num);
    return 0;
}