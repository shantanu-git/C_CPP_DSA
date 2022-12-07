#include<stdio.h>
int main(){

    //Quadratic equation is ax^2 + bx + c = 0; a , b ,c is called coefficients
    //discriminant decides if the roots are real(positive), equal(zero) or imaginary(negative).
    //discriminant = b^2- 4ac;
    double a,b,c,discriminant;
    printf("Enter the 3 coefficients\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    discriminant = b*b - 4*a*c;
    if(discriminant>0)
    {
        printf("Roots are real %lf",discriminant);
    }
    else if(discriminant == 0)
    {
        printf("Roots are %lf equal",discriminant);
    }
    else{
        printf("Roots are %lf imaginary",discriminant);
    }
    return 0;
}