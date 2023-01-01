/* Program to Convert even number into its upper nearest odd number Switch Statement. */
#include<stdio.h>
int main()
{

    int number;
    printf("Enter number \n");
    scanf("%d",&number);

    switch(number%2==0)
    {
        case 0:
            number = number-1;
            printf("Rounded off to nearest lower even %d",number);
            break;
        case 1:
            number = number+1;
            printf("Rounded off to nearest upper odd %d",number);
            break;
        default:
            printf("Default case");
    }
    return 0;
}