#include <stdio.h>
//f prototype
float calcTax(float gross_salary);

int main(){
    float gross_salary, result, net_salary;
    printf("Enter your gross salary: \t");
    scanf("%f", &gross_salary);

    result = calcTax(gross_salary);
    net_salary = gross_salary- result;

    printf("Gross salary: %.2f \n",gross_salary);
    printf("Tax: %.2f", result);
    printf("Net salary: %.2f", net_salary);
    
    return 0;}
//f definition
float calcTax(float gross_salary){
    float tax;
    if(tax <30000){
        tax = 0.05 * gross_salary;
    }
    else if(tax >=30000 && tax <=59999){
        tax = 0.1 * gross_salary;
    }
    else if(tax >=60000){
        tax = 0.15 * gross_salary;
    }
   return tax;}