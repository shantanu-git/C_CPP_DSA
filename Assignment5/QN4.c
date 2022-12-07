/* Write a program to print the first N odd natural numbers
 */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter value of N\n");
    scanf("%d",&n);
    for(int i = 1 ;i<(n*2);i+=2){
        printf("%d\n",i);
    }
    return 0;
}