/* Pattern is 
*    
**   
* *  
*  * 
*****

logic

i    j
0   0
1   0,1
2   0,2
3   0,3
4   0,1,2,3,4

 */
#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=4;j++)
        {
            if(j==0 || j==i || i==4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}