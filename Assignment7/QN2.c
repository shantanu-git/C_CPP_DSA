/* Write a program to print first N terms of Fibonacci series */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter value of N\n");
    scanf("%d",&n);
    int f1=0,f2=1,nthTerm=0;
    for(int i=1;i<=n;i++){
        if(i==1){
            printf("%d ",f1);
        }
        else if(i==2){
            printf("%d ",f2);
        }
        else{
            nthTerm = f1+f2;
            printf("%d ",nthTerm);
            f1=f2;
            f2=nthTerm;
        }
    }

    return 0;
}