/* Write a program to print squares of the first N natural numbers */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter value of N\n");
    scanf("%d",&n);
    for(int i = 1 ;i<=n;i++){
        printf("%d\n",i*i);
    }
    return 0;
}