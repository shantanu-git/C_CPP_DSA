#include<stdio.h>
int main(){

    float subj1,subj2,subj3,subj4,subj5;
    printf("Enter marks of 5 subjects\n");
    scanf("%f %f %f %f %f",&subj1,&subj2,&subj3,&subj4,&subj5);

    float avg = ((subj1+subj2+subj3+subj4+subj5)/500)*100;
    if(avg>=33){
        printf("percentage is %f",avg);
    }
    return 0;
}