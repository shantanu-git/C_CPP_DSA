/* Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit */
#include <stdio.h>
int main()
{
    int num1, num2, result = 0;
    while (1)
    {
        char option;
        printf("Enter option\n a. Addition\n b. Subtraction \n c. Multiplication \n d. Division \n e. Exit \n ");
        //scanf takes return character also in bufffer and loop exits after 1 iteration as it takes retun char from buffer
        fflush(stdin);
        scanf("%c", &option);
        fflush(stdin);
        switch (option)
        {
        case 'a':
            printf("Enter two numbers\n");
            scanf("%d %d", &num1, &num2);
            result = num1 + num2;
            printf("result %d \n", result);
            break;
        case 'b':
            printf("Enter two numbers\n");
            scanf("%d %d", &num1, &num2);
            result = num1 - num2;
            printf("result %d \n", result);
            break;
        case 'c':
            printf("Enter two numbers\n");
            scanf("%d %d", &num1, &num2);
            result = num1 * num2;
            printf("result %d \n", result);
            break;
        case 'd':
            printf("Enter two numbers\n");
            scanf("%d %d", &num1, &num2);
            result = num1 / num2;
            printf("result %d \n", result);
            break;
        case 'e':
            return 0;
            break;
        default:
            return 0;
            break;
        }
    }
    return 0;
}