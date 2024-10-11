/*A program that calculates electricity bills.
Author: Maijos8109
Ref No: CT101/G/22636/24
Date of coding: 21/09/2024*/
#include <stdio.h>

int main()
{
 //Declaration and initialization
    int customerID;
    int customerName;
    float unitsConsumed;
    float surcharge;

    printf("Enter customer ID:\n");
    scanf("%d",&customerID);
    printf("Enter customer Name:\n");
    scanf("%d",& customerName);
    printf("Enter units Consumed\ns:");
    scanf("%f",& unitsConsumed);

    float chargePerUnit;
    float Bill;

    if(unitsConsumed <= 199)
    {
        chargePerUnit=1.20;
        Bill = unitsConsumed*chargePerUnit;
    }
    else if(unitsConsumed < 400)
    {
        chargePerUnit=1.50;
        Bill = unitsConsumed*chargePerUnit;
    }
    else if(unitsConsumed < 600)
    {chargePerUnit=1.80;
    Bill = unitsConsumed*chargePerUnit;
    }
    else(unitsConsumed > 600);
    {
    chargePerUnit=2.00;
    Bill = unitsConsumed*chargePerUnit;
    }
    if(Bill>400)
    {
        surcharge = 0.15*Bill;
    }
    else
    {
        surcharge=0;
    }
    if(Bill<100)
    {
        Bill=100;
    }
    float TotalAmount;
    TotalAmount = Bill+surcharge;
    printf("The customer ID is %d\n", customerID);
    printf("The customer name is %d\n", customerName);
    printf("The units consumed are %f\n", unitsConsumed);
    printf("The charges per unit are %f\n", chargePerUnit);
    printf("Total amount to be paid is %f\n", TotalAmount);


    return 0;
}
