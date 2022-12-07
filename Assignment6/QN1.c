/* Write a program to calculate sum of first N natural numbers */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter value of N\n");
    scanf("%d",&n);
    int sum=0;
    for(int i = 1 ;i<=n;i++){
        sum +=i;
        printf("%d\n",i);
    }
    printf("sum is %d\n",sum);
    return 0;
}