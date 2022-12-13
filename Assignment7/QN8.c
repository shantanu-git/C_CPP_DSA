/* Write a program to find next Prime number of a given number */
#include<stdio.h>
int main(){

    int n;
    printf("Enter number\n");
    scanf("%d",&n);
	while (1) {
        n++;
        int flag = 0;
		for(int i=2;i<=n/2;i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d ",n);
            break;
        }
	}
    return 0;
}
