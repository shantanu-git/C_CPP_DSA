#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){

    printf("Enter time in HH:MM format:");
    int hour,min;
    scanf("%d:%d",&hour,&min);
    printf("%d hour and %d Minute",hour,min);
    return 0;
}