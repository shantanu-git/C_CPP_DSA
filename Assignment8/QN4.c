/* Pattern is 

*****
 ****
  ***
   **
    *

--logic

i   j
0   0,1,2,3,4
1     1,2,3,4
2       2,3,4
3         3,4
4           4

 */
#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
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