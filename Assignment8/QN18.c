 /* pattern is
    *    
   ***   
  *****  
 ******* 
*********
 ******* 
  *****  
   ***   
    *    
 */
#include<stdio.h>
int main()
{
    for(int i =0;i<9;i++){
        for(int j=0;j<9;j++){
            if(i<=4){
                if(j>=4-i && j<=4+i){
                printf("*");
                }
                else{
                  printf(" ");
                }
            }
            else{
                if(j>=i-4 && j<=12-i){
                    printf("*");
                }
                else{
                  printf(" ");
                }
            }
            
        }
        printf("\n");
    }
    return 0;
}