/* Write a program to calculate factorial of a number */
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a Number\n");
    scanf("%d", &num);
    int factorial = 1;
    if (num <= 0)
    {
        factorial = 1;
    }
    else
    {
        for (int i = num; i > 0; i--)
        {
            factorial *= i;
            printf("%d\n", i);
        }
    }

    printf("factorial is %d\n", factorial);
    return 0;
}