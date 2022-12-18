/* Pattern is 

*****
****
***
**
*

--logic

i   j
0   0,1,2,3,4
1   0,1,2,3,
2   0,1,2,
3   0,1
4   0

 */
#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=4-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}