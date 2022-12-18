/* Pattern is 
    *
   **
  * *
 *  *
*****

logic

i    j
0   4
1   3,4
2   2,4
3   1,4
4   0,1,2,3,4

 */
#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=4;j++)
        {
            if(j==4 || j==4-i || i==4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}