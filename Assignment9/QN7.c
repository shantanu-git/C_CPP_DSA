/* 
Program to take the value from the user as input electricity unit charges and calculate
total electricity bill according to the given condition . Using the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
 */
#include<stdio.h>
int main()
{
    int units;
    printf("Enter units\n");
    scanf("%d",&units);
    float total;
    int res;
    if(units>250){
        res = 4;
    }
    else if(units>150 && units<=250){
        res = 3;
    }
    else if(units>50 && units<=150){
        res = 2;
    }
    else if(units>0 && units<=50){
        res = 1;
    }
    //printf("resis %d",res);
    switch(res)
    {
        case 1:
            total = units*0.50;
            break;
        case 2:
            total = (50*0.50) + ((units-50)*0.75);
            break;
        case 3:
            total = (50*0.50) + (100*0.75)+ ((units-100)*1.20);
            break;
        case 4:
            total = (50*0.50) + (100*0.75)+ (100*1.20) + ((units-250)*1.50);
            break;
    }

    total += 0.20 * total;

    printf("Total bill is %f",total);

    return 0;
}