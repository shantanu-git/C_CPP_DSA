/* 
Write a program to print iNeuron N times on the screen
 */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter value of N\n");
    scanf("%d",&n);
    for(int i = 0 ;i<n;i++){
        printf("iNeuron\n");
    }
    return 0;
}