#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number \n");
    scanf("%d",&num);
    num = (num/10)*10;
    printf("%d",num);
    return 0;
}