/* Write a program to find the position of first 1 in LSB. */

#include<stdio.h>
int main(){
    int num;
    printf("Enter number\n");
    scanf("%d",&num);
    if(num==0){
        printf("no position");
    }
    else{
        int count=1;
        int temp = num;
        while(temp!=0){
            if((temp&1)==1){
                printf(" The LSB is at %d",count);
                break;
            }else{
                num = num>>1;
                temp=num;
                count++;
            }
        }
    }
    return 0;
}
