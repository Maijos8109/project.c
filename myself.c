//A program that shows one's details and his financial stability
//Author: Maijos8109
//Ref No: CT101/G/22636/24
//Date of coding: 21/09/2024
#include <stdio.h>

int main()
{
 //Declaration and initialization   
    char a = 'H' ; //%c
    char name[] = {"Joseph"}; //%s
    int age = 17; //%d
    float salary = 2000.50; //%f
    double budget = 1000; //lf

    printf("Enter a character:\n");
    scanf("%c", &a);
    printf("The character is %c \n", a);
    printf("Enter your name:\n");
    scanf("%s", &name);
    printf("Your name is %s \n", name);
    printf("Enter your age:\n");
    scanf("%d", &age);
    printf("Your age is %d\n", age);
    printf("Enter your salary:\n");
    scanf("%f", &salary);
    printf("Your salary is %.2f\n", salary);
    printf("Enter your budget:\n");
    scanf("%lf", &budget);
    printf("Your budget is %.4lf", budget);

    return 0;
}