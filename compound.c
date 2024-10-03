 /*Program to find compound in a financial institution.
 it accepts principle, rate, number of compounding periods and time.
 Author: Maijos8109
 Ref No: CT101/G/22636/24
 Date of coding: 25th.September.2024*/
#include <stdio.h>
#include <math.h>

//Declaration and initialization
int main(){
    char name[] = {"Maitha Company"}; //%s
    float principal; //%f
    float time; //f
    float n; //%f
    float rate; //%f
    float Amount; //%f
    float ci; //f

    printf("Enter your name \n");
    scanf("%s", &name);
    printf("Your name is %s\n",name);
    printf("Enter principal\n");
    scanf("%f", &principal);
    printf("The principal is %f\n",principal);
    printf("Enter time\n");
    scanf("%f", &time);
    printf("The time is %f\n",time);
    printf("Enter n\n");
    scanf("%f", &n);
    printf("The n is %f\n",n);
    printf("Enter rate\n");
    scanf("%f", &rate);
    printf("The rate is %f\n",rate);
//Calculation of the total amount
    Amount = principal*pow((1+rate/100*n),n*time);
    rate = rate/100;
    printf("Amount is %.2f\n", Amount);

//calculation of compound interest
  ci = Amount-principal;
    printf("compound interest is %f", ci);

    return 0;
}
