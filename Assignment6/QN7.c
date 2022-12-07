/* Write a program to count digits in a given number */
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a Number\n");
    scanf("%d", &num);
    int count=0;
    for (int i = num; i > 0; i/=10)
    {
        count++;
        printf("%d\n", i);
    }
    printf("count is %d\n", count);
    return 0;
}