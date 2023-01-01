/* Write a program which takes the day number of a week and displays a unique greeting message for the day. */
#include <stdio.h>
int main()
{
    while (1)
    {
        int day;
        printf("Enter option\n 1. Monday\n 2. Tuesday \n 3. Wednesday \n 4. Thrusday \n 5. Friday \n 6. Saturday \n 7.Sunday \n");
        //scanf takes return character also in bufffer and loop exits after 1 iteration as it takes retun char from buffer
        fflush(stdin);
        scanf("%d", &day);
        fflush(stdin);
        switch (day)
        {
        case 1:
            printf(" Monday Motivation !  \n");
            break;
        case 2:
            printf(" Namaste Tuesday !  \n");
            break;
        case 3:
            printf(" Wanakam Wednesday !  \n");
            break;
        case 4:
            printf(" Bonjour Thrusday !  \n");
            break;
        case 5:
            printf(" Hola Friday !  \n");
            break;
        case 6:
            printf(" Good Morning Saturday ! \n");
            break;
        case 7:
            printf(" Happy Sunday !  \n");
            break;
        default:
            return 0;
            break;
        }
    }
    return 0;
}