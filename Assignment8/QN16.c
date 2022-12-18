/* Pattern is 
    *
   * *
  *   *
 *     *
*********

logic

i    j
0   4
1   3,5
2   2,6
3   1,7
4   0,1,2,3,4,5,6,7,8

 */
#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=4+i;j++)
        {
            if(j==4-i || j==4+i|| i==4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}