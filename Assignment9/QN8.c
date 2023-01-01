/* 
Program to convert a positive number into a negative number and negative number 
into a positive number using a switch statement. */
#include<stdio.h>
int main()
{

    int number;
    printf("Enter number \n");
    scanf("%d",&number);

    switch(number>0)
    {
        case 0:
            number = number*(-1);
            printf("Number now is %d",number);
            break;
        case 1:
            number = number*(-1);
            printf("Number now is %d",number);
            break;
        default:
            printf("Not valid number");
    }
    return 0;
}