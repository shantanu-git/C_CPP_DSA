/* Pattern is 

ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     DCBA
ABC       CBA
AB         BA
A           A
--logic

i           j
0   0,1,2,3,4,5,6
1   0,1,2   4,5,6
2   0,1       5,6
3   0           6

 */
#include<stdio.h>
int main()
{
    for(int i=0;i<7;i++)
    {   
        char num='A';
        for(int j=0;j<13;j++)
        {
            if(j<=6-i){
                printf("%c",num);
                if(i==0 && j==6){
                    continue;
                }
                else{
                    num++;
                }
                
            }
            else if(j>=6+i){
                num--;
                printf("%c",num);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}