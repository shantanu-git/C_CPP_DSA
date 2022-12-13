/* Write a program to check whether a given number is there in the Fibonacci series or not. */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number\n");
    scanf("%d",&n);
    int f1=0,f2=1,nthTerm=0;
    for(int i=1;i<=n;i++){
        if(nthTerm==n){
            printf("The number is present");
            break;
        }
        else if(nthTerm<n){
            nthTerm = f1+f2;
            f1=f2;
            f2=nthTerm;
        }
        else{
            printf("The number is not present");
            break;
        }
    }

    return 0;
}