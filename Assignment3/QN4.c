#include<stdio.h>
int main(){

    int num;
    printf("Enter number to check if even or odd without percentage use \n");
    scanf("%d",&num);
    /* int res = num>>1;
    if(res*2==num){
        printf("The number %d is even",num);
    }
    else
    {
        printf("The number %d is odd",num);
    } 
    */
    if((num & 1) ==1)
    {
        printf("The number %d is odd",num);
    }
    else if((num^15)==15){
        printf("The number %d is neither odd not even",num);
    }
    else
    {
        printf("The number %d is even",num);
    }
    
    return 0;
}