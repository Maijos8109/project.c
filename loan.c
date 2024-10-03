 /*A program to evaluate the eligibility of one requesting for a loan.
It accept age and income of the applicant.
Author: Maijos8109
Ref No: CT101/G/22636/24
Date: 2/10/2024.*/
#include <stdio.h>

int main()
{
    //Declaration and initialization of the loan requirements.
    int age;
    int income;

    printf("Please enter your age");
    scanf("%d", &age);
    printf("Please enter your income");
    scanf("%d", &income);

    if (income>=21000 && age>=21)
    {
        printf("Congratulations! You qualify for the loan.");// if one meets all the requirements.
    }
    else
    {
        printf("Unfortunately, we are unable to offer you a loan at this time.");//if one fails to meet all the requirement.
    }
    return 0;
}
