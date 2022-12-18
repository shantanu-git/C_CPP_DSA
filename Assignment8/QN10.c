/* Pattern is 

1234321
123 321
12   21
1     1
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
    for(int i=0;i<4;i++)
    {   
        int num=1;
        for(int j=0;j<7;j++)
        {
            if(j<=3-i){
                printf("%d",num);
                if(i==0 && j==3){
                    continue;
                }
                else{
                    num++;
                }
                
            }
            else if(j>=3+i){
                num--;
                printf("%d",num);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}