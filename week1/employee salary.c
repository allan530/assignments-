#include <stdio.h>

//function prototype
float calculateTax(float gross_salary);

int main(){

    float gross_salary,tax_amount,net_salary;
    printf("Enter employee's gross salary: \t");
    scanf("%f",&gross_salary);
    //function call
    tax_amount=calculateTax(gross_salary);
    net_salary=gross_salary-tax_amount;


    printf("\n");
    printf("ZCOMPANY TAX PROGRAM \n");
    printf("====================== \n");
    printf("initial salary:Ksh.%.2f \n",gross_salary);
    printf("tax payed:Ksh.%.2f \n",tax_amount);
    printf("final salary:Ksh.%.2f \n",net_salary);
    printf("====================== \n");

    return 0;
}
//function definition
float calculateTax(float gross_salary){
      float tax;
      if(gross_salary <30000){
        tax=0.05*gross_salary;

      }
      else if(gross_salary >=30000 && gross_salary<=59999){
        tax=0.1*gross_salary;

      }
      else if(gross_salary >=60000){
        tax=0.15*gross_salary;
      }

      return tax;
}
