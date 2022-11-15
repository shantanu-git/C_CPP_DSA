#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number to chek even or odd\n");
    scanf("%d",&number);
    int mask = number&1;
    mask==0? printf("even"):printf("odd");
    return 0;
}