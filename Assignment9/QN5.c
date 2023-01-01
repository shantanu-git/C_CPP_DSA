/* Convert the following if-else-if construct into switch case:
if(var == 1) printf("good");
else if(var == 2) printf("better");
else if(var == 3) printf("best");
else
printf("invalid"); */
#include <stdio.h>
int main()
{

    int var;
    printf("Enter option\n");
    // scanf takes return character also in bufffer and loop exits after 1 iteration as it takes retun char from buffer
    fflush(stdin);
    scanf("%d", &var);
    fflush(stdin);
    switch (var)
    {
    case 1:
        printf("good\n");
        break;
    case 2:
        printf("better\n");
        break;
    case 3:
        printf("best\n");
        break;
    default:
        printf("Invalid\n");
        break;
    }
    return 0;
}