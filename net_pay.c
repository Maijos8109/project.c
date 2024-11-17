#include <stdio.h>

float calculate_netPay
float calculate_tax
float calculate_overHours
int main()
{
    float hours_worked; //hours worked in a week.
    float hourly_wage;
    float grossPay;
    float netPay;
    int overHours; //overtime hours
    int overPay; //overtime payment

    printf("Please enter hours worked:\n");
    scanf("%f,\n" &hours_worked);
    printf("Please enter your hourly wage;\n");
    scanf("%f,\n" &h
    float regularPay = hours_worked*hourly_wage;
    overHours = hours_worked - 40;
    overPay = overHours*hourly_wage*1.5;

    if(hours_worked <= 40){
        printf("overHours = 0")
        printf("grossPay = hours_worked*hourly_wage");
    }
    else(hours_worked > 40); {
        printf("grossPay =regularPay + overPay");
    }

float tax(float grossPay) {
    if (grossPay <= 600){
        return 0.15;
    }
    else {
        return 0.20;
    }
}

     netPay = grossPay -tax

    return 0;
}
