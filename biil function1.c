/*A program that calculates electricity bills.
Author: Maijos8109
Ref No: CT101/G/22636/24
Date of coding: 21/09/2024*/
#include <stdio.h>

void getInput(int *customerID, char customerName[], float *unitsConsumed);
float calculateCharges(float unitsConsumed);
float calculateSurcharge(float Bill);
float calculateTotalBill(float Bill, float surcharge);

int main() {
    // Declaration and initialization
    int customerID;
    char customerName[16];
    float unitsConsumed;
    float surcharge;
    float chargePerUnit;
    float Bill;

    // Get input from the user
    getInput(&customerID, customerName, &unitsConsumed);

    // Calculate charges per unit
    chargePerUnit = calculateCharges(unitsConsumed);
    
    // Calculate initial bill
    Bill = chargePerUnit * unitsConsumed;

    // Ensure minimum bill amount
    if (Bill < 100) {
        Bill = 100;
    }

    // Calculate surcharge
    surcharge = calculateSurcharge(Bill);

    // Calculate total amount
    float TotalAmount = calculateTotalBill(Bill, surcharge);

    // Display results
    printf("The customer ID is %d\n", customerID);
    printf("The customer name is %s\n", customerName);
    printf("The units consumed are %.2f\n", unitsConsumed);
    printf("The charges per unit are %.3f\n", chargePerUnit);
    printf("Total amount to be paid is %.3f\n", TotalAmount);

    return 0;
}

void getInput(int *customerID, char customerName[16], float *unitsConsumed) {
    printf("Enter customer ID:\n");
    scanf("%d", customerID);
    printf("Enter customer Name:\n");
    scanf("%s", customerName);
    printf("Enter units consumed:\n");
    scanf("%f", unitsConsumed);
}

float calculateCharges(float unitsConsumed) {
    if (unitsConsumed <= 199) {
        return 1.20;
    } else if (unitsConsumed < 400) {
        return 1.50;
    } else if (unitsConsumed < 600) {
        return 1.80;
    } else { // No condition needed, it's implied that it's > 600
        return 2.00;
    }
}

float calculateSurcharge(float Bill) {
    if (Bill > 400) {
        return 0.15 * Bill;
    }
    return 0;
}

float calculateTotalBill(float Bill, float surcharge) {
    return Bill + surcharge;
}
