/* Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an isosceles
triangle or not
b. Check whether a given set of three numbers are lengths of sides of a right
angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle or not
d. Exit
 */
#include <stdio.h>
#include<math.h>
int main()
{
    double side1, side2, side3;
    while (1)
    {
        int option;
        printf("Enter option\n 1. Isosceles Triangle \n 2. Right Angled triangle \n 3. Equilateral Traingle \n 4. Exit \n");
        //scanf takes return character also in bufffer and loop exits after 1 iteration as it takes retun char from buffer
        fflush(stdin);
        scanf("%d", &option);
        fflush(stdin);
        switch (option)
        {
        case 1:
            printf("Enter three sides\n");
            scanf("%lf %lf %lf", &side1, &side2, &side3);
            if(side1 == side2 || side2 == side3 || side3 == side1)
                printf("This is Isosceles Triangle\n");
            else
                printf("This is NOT Isosceles Triangle\n");
            break;
        case 2:
            printf("Enter three sides\n");
            scanf("%lf %lf %lf", &side1, &side2, &side3);
            printf("%lf %lf %lf ",pow(side1,2), pow(side2,2) ,pow(side3,2));
            if( (pow(side1,2) + pow(side2,2) == pow(side3,2)) || (pow(side2,2) + pow(side3,2) == pow(side1,2)) || (pow(side3,2) + pow(side1,2) == pow(side2,2)))
                printf("This is Right Angled Traingle\n");
            else
                printf("This is NOT Right Angled Traingle\n");
            break;
        case 3:
            printf("Enter three sides\n");
            scanf("%lf %lf %lf", &side1, &side2, &side3);
            if(side1 == side2 && side2 == side3)
                printf("This is Equilateral Traingle\n");
            else
                printf("This is NOT Equilateral Traingle\n");
            break;
        case 4:
            return 0;
            break;
        default:
            return 0;
            break;
        }
    }
    return 0;
}