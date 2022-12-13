/*Write a program to find the Nth term of the Fibonnaci series.
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter value of Nth term\n");
    scanf("%d",&n);
    int f1=0,f2=1,nthTerm=0;
    if(n==1){
        printf("%d",f1);
    }
    else if(n==2){
        printf("%d",f2);
    }
    else{
        for(int i=3;i<=n;i++){
            nthTerm = f1+f2;
            if(i==n){
                printf("%d",nthTerm);
            }
            f1=f2;
            f2=nthTerm;
        }
    }
    return 0;
}