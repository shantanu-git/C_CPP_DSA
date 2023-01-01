/* Program to check whether a year is a leap year or not. Using switch statement */
#include <stdio.h>
int main()
{
    int year;
    printf("Enter year to check leap year\n");
    scanf("%d",&year);
    int res = (year%4==0)?1:0;
    //printf(" res %d \n",res);
    switch(res)
    {
        case 1:
            if((year%100==0) && (year%400==0))
                printf("It is a leap year");
            else
                printf("Not a Leap Year");
            break;
        case 0: 
            printf("Not a Leap Year");
            break;
    }

    return 0;
}