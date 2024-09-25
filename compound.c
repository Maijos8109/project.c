 /*Program to find compound in a financial institution.
 it accepts principle, rate, number of compounding periods and time.
 Author: Josephmaitha8109
 Date of coding: 25th.september.2024*/
#include <stdio.h>
#include <math.h>

//Declaration and initialization
int main(){
    char name[] = {"Maitha Company"}; //%s
    float principal; //%f
    float time; //f
    float n; //%f
    float Amount; //%f
    float rate; //%f

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
//Calculation of the compound interest
    Amount = principal*pow((1+rate/n),n*time);
    rate = rate/100;
    printf("Compound intrest is %.2f\n",Amount);

    return 0;
}
