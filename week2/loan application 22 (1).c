#include <stdio.h>

int main(){
     int age;
     float income;

     //prompt the user for input
     printf("How old are you \t");
     scanf("%d",&age);
     printf("how much do you earn per month(ksh)\t");
     scanf("%f",&income);

     //check the eligibility of loan requirments
     if(age>=21 & income>=21000)
    {printf("congratulations,you qualify for a loan.\n");}
     else{
    printf("unfortunatley,we are unable to offer you a loan at this time.");
     }
     return 0;

}
