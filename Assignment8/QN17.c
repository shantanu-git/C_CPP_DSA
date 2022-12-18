/* Pattern is
*********
 *     *  
  *   *    
   * *      
    * 
 */
#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=8+i;j++)
        {
            if(j==i || j==8-i|| i==0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}