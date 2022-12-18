/* Pattern is 

    1
   121
  12321
 1234321

--logic

i           j
0           4
1         3,4,5
2       2,3,4,5,6
3     1,2,3,4,5,6,7

 */
#include<stdio.h>
int main()
{
    for(int i=0;i<4;i++)
    {
        int num=1;
        for(int j=0;j<=4+i;j++)
        {
            if(j>=4-i){
                printf("%d",num);
                if(j<4)
                    num++;
                else
                    num--;
            }   
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}