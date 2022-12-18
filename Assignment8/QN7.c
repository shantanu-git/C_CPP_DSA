/* Pattern is 

**********
****  ****
***    ***
**      **
*        *
--logic

i           j
0   0,1,2,3,4,5,6,7,8,9
1   0,1,2,3     6,7,8,9
2   0,1,2         7,8,9
3   0,1             8,9
4   0                 9

 */
#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(j<=4-i || j>4+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}