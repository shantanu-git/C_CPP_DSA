/* Write a program to print the first N odd natural numbers in reverse order. */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter value of N\n");
    scanf("%d",&n);
    for(int i = ((2*n)-1) ;i>0;i-=2){
        printf("%d\n",i);
    }
    return 0;
}