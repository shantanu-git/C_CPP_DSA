/* C program to find all roots of a quadratic equation using switch case */
#include <stdio.h>
#include <math.h>
int main()
{

    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;
    int cond;
    if (discriminant > 0)
        cond = 1;
    else if (discriminant < 0)
        cond = -1;
    else
        cond = 0;

    switch (cond)
    {
    // condition for real and different roots
    case 1:
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
        break;
    // if roots are not real
    case -1:
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
        break;
    // condition for real and equal roots
    case 0:
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
        break;
    }
    return 0;
}