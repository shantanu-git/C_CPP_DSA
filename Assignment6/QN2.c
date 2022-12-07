/* Write a program to calculate sum of first N even natural numbers */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter value of N\n");
    scanf("%d",&n);
    int sum=0;
    for(int i = 2 ;i<=(n*2);i+=2){
        printf("%d\n",i);
        sum +=i;
    }
    printf("sum is %d\n",sum);
    return 0;
}