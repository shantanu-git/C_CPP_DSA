/* Write a program to print a table of N. */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter value of N\n");
    scanf("%d",&n);
    for(int i = 1 ;i<=10;i++){
        printf("%d\n",i*n);
    }
    return 0;
}