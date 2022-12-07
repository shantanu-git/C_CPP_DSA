#include<stdio.h>
int main(){

    int num;
    printf("Enter number to check if 3 digit number \n");
    scanf("%d",&num);
    /* int temp = num;
    int count = 0;
    while(temp>0)
    {
        temp = temp/10;
        count++;
    }
    if(count == 3){
        printf("The number %d is 3 digit number",num);
    }
    else
    {
        printf("The number %d is not 3 digit number",num);
    } */
    if( (num>99) && (num<1000) ){
        printf("The number %d is 3 digit number",num);
    }
    else{
        printf("The number %d is not 3 digit number",num);
    }
    return 0;
}