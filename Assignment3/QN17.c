#include<stdio.h>
int main(){

    int s1,s2,s3;
    printf("Enter three sides of triangle\n");
    scanf("%d %d %d",&s1,&s2,&s3);

    //when sum of two sides of triangle is greater than third then triangle is valid
    if(((s1+s2)>s3) || ((s2+s3)>s1) || ((s3+s1)>s2))
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid");
    }
    
    return 0;
}