/* Write a program to check whether a given number is a Prime number or not */
#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d",&num);
    int count=0;
    for(int i=2;i<num/2;i++){
        if(num%i==0){
            count++;
            break;
        }
    }
    if(count==0 && num!=1){
        printf("The number is prime");
    }
    else{
        printf("The number is not prime");
    }

    return 0;
}