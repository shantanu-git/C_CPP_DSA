#include<stdio.h>
int main(){

    int month_num;
    printf("Enter month number to find number of days\n");
    scanf("%d",&month_num);
    if(month_num == 1 || month_num == 3 || month_num == 5 || month_num == 7 ||  month_num == 8 || month_num == 10 || month_num == 12) 
    {
        printf("31 days");
    }
    else if(month_num == 2)
    {
        printf("28/29 days");
    }
    else{
        printf("30 days");
    }
    return 0;
}