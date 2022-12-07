#include<stdio.h>
int main(){

    int num;
    printf("Enter number to check positive or negative\n");
    scanf("%d",&num);
    if(num>0){
        printf("The number is %d positive",num);
    }else if(num<0)
    {
        printf("the number is %d negative",num);
    }
    else
    {
        printf("the number is %d zero",num);
    }
    return 0;
}