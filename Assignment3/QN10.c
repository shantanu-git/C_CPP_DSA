#include<stdio.h>
int main(){

    float cp, sp, profit, loss;
    printf("Enter cost price and selling price\n");
    scanf("%f %f",&cp,&sp);

    if((sp-cp) > 0)
    {        
        profit = (((sp-cp)/cp)*100);
        printf("%f %f profit is %f",cp,sp,profit);
    }
    else 
    {
        loss = ((cp-sp)/cp)*100;
        printf("loss is %f",loss);
    }
    return 0;
}