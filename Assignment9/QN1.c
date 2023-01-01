/* Write a program which takes the month number as an input and display number of days in that month. */
#include<stdio.h>
int main()
{
    int month;
    printf("Enter month Number\n");
    scanf("%d",&month);
    int numOfDays;
    switch(month)
    {
        case 1:
                numOfDays=31;
                break;
        case 2:
                numOfDays=28;
                break;
        case 3:
                numOfDays=31;
                break;
        case 4:
                numOfDays=30;
                break;
        case 5:
                numOfDays=31;
                break;
        case 6:
                numOfDays=30;
                break;
        case 7:
                numOfDays=31;
                break;
        case 8:
                numOfDays=31;
                break;
        case 9:
                numOfDays=30;
                break;
        case 10:
                numOfDays=31;
                break;
        case 11:
                numOfDays=30;
                break;
        case 12:
                numOfDays=31;
                break;
        default:
                numOfDays=0;
                break;
    }
    printf("Number of days %d",numOfDays);

    return 0;
}