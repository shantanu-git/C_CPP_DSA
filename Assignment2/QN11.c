#include<stdio.h>
int main()
{
    float inr, usd;
    printf("Enter the amount in Rupees\n");
    scanf("%f",&inr);
    usd = inr/76.23;
    printf("value of Rupees %.2f is equal to US %.2f$",inr,usd);
    return 0;
}