/* Write a program to check whether a given number is an Armstrong number or not */
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter number\n");
    scanf("%d",&n);
    int count=0;
    for (int i = n; i > 0; i/=10)
    {
        count++;
        printf("%d\n", i);
    }
    printf("count is %d\n", count);
    printf("n is %d\n", n);
    int armsNbr=0;
    int temp =n;
    while(temp>0){
        int digit = temp%10;
        temp = temp/10;
        armsNbr +=pow(digit,count);;
    }
    if(armsNbr==n){
        printf("It is Armstrong number");
    }
    else
        printf("It is Not Armstrong number");
    return 0;
}