/*NAME ALLAN MUNGAI
REGISTRATION NMBER CT100/G/30698/26
A program to calculate water bill for xyz company
*/

#include <stdio.h>
int number_of_water_units_consumed;
float total_bill;

int main(){
    //prompt the user for input
    printf("Enter the number_of_water_units_consumed:\t");
    //calculate total bill
    scanf("%d",&number_of_water_units_consumed);


    if(number_of_water_units_consumed<=30)
    {total_bill=number_of_water_units_consumed*20.0;}
    else if(number_of_water_units_consumed<=60)
    {total_bill=30*20.0+((number_of_water_units_consumed-30)*25.0);}
    else
    {total_bill=number_of_water_units_consumed*30.0;}


    //display results
    printf("The total_bill is %.2f",total_bill);
    return 0;
}







