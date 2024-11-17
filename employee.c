/*A program to show structures
Name: Joseph Maitha
REF NO: CT101/G/22636/24
Date of coding: 7/11/2024*/
#include <stdio.h>
#include <string.h>

int main() {
    struct employee {
        char name[25];
        int id;
        char department[20];
        float salary;
        char email[50];
    };

    struct employee emp1 = {
        "John Doe",
        12345,
        "Human Resources",
        55000.50,
        "john.doe@company.com"
    };

    printf("Name: %s\n", emp1.name);
    printf("ID: %d\n", emp1.id);
    printf("Department: %s\n", emp1.department);
    printf("Salary: %.2f\n", emp1.salary);
    printf("Email: %s\n", emp1.email);

    return 0;
}
