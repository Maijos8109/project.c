#include <stdio.h>

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

int main() {
    int num1, num2;
    
    // Ask the user for input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    // Call the add function and print the result
    printf("Sum of %d and %d is: %d\n", num1, num2, add(num1, num2));
    
    // Call the subtract function and print the result
    printf("Difference between %d and %d is: %d\n", num1, num2, subtract(num1, num2));
    
    // Call the multiply function and print the result
    printf("Product of %d and %d is: %d\n", num1, num2, multiply(num1, num2));

    return 0;
}

// Function definitions

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
}

// Function to multiply two numbers
int multiply(int a, int b) {
    return a * b;
}
