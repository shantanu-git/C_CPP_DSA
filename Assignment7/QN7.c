/* Write a program to print all Prime numbers between two given numbers */
#include<stdio.h>
int main(){

    int n=2;
	while (n<=100) {
        int flag = 0;
		for(int i=2;i<=n/2;i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d ",n);
        n++;
	}
    return 0;
}
