#include<stdio.h>
int main(){

    char alphabet;
    printf("Enter any alphabet\n");
    scanf("%c",&alphabet);

    if((alphabet>=65)&& (alphabet<=90))
    {
        printf("Upper");
    }
    else if((alphabet>=97)&& (alphabet<=122)){
        printf("lower");
    }
    
    return 0;
}