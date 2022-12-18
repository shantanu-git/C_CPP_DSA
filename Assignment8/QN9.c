/* Pattern is 

1234321
 12321
  121
   1

--logic

i           j
0     1,2,3,4,5,6,7
1       2,3,4,5,6
2         3,4,5
3           4

 */
#include<stdio.h>
int main()
{
    for(int i=0;i<4;i++)
    {
        int num =1;
        for(int j=0;j<7-i;j++)
        {
            if(j>=i){
                printf("%d",num);
                if(j<3)
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