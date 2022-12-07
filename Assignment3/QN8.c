#include<stdio.h>
int main(){

    int year;
    printf("Enter year to check if it is leap year or not\n");
    scanf("%d",&year);
    if(((year%4==0) && (year%100==0))||(year%400==0))
    {
        printf("%d is a leap year",year);
    }
    else{
        printf("%d is a not leap year",year);
    }
    return 0;
}