/* Write a program to print all Armstrong numbers under 1000 */
#include <stdio.h>
#include <math.h>
int main()
{
    int n = 1;
    while (n < 1000)
    {
        int count = 0;
        for (int i = n; i > 0; i /= 10)
        {
            count++;
        }
        int armsNbr = 0;
        int temp = n;
        while (temp > 0)
        {
            int digit = temp % 10;
            temp = temp / 10;
            armsNbr += pow(digit, count);
            ;
        }
        if (armsNbr == n)
        {
            printf("%d ",armsNbr);
        }
        n++;
    }

    return 0;
}