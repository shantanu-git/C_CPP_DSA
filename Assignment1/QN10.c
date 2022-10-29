#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){

    printf("Enter date in DD/MM/YYYY format:");
    int date,month,year;
    scanf("%d/%d/%d",&date,&month,&year);
    printf("Day - %d , Month - %d , Year - %d",date,month,year);

    /* char inputDate[11];
    printf("Enter date in DD/MM/YYYY format:");
    scanf("%s",inputDate);
    
    //printf("%s",inputDate);
    
    char *token = strtok(inputDate, "/");
    int i=0;
    int arr[3];
    while (token != NULL)
    {
        arr[i]= atoi(token);
        //printf("%s\n", token);
        token = strtok(NULL, "/");
        i++;
    }
    
    printf("Day - %d , Month - %d , Year - %d",arr[0],arr[1],arr[2]); */
    return 0;
}