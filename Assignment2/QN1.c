#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to find last digit\n");
    scanf("%d",&num);
    printf("%d",num%10);
    return 0;
}