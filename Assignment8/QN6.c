/* Pattern is 

*********
 *******
  *****
   ***
    *

--logic

i           j
0   0,1,2,3,4,5,6,7,8
1     1,2,3,4,5,6,7
2       2,3,4,5,6
3         3,4,5
4           4

 */
#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=8-i;j++)
        {
            if(j>=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}