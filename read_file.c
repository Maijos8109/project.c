//A program to read a file.
//Author: Joseph Maitha (maijos8109).
//Date of coding: 28/11/2024
#include <stdio.h>

#define MAX_NAME 50

typedef struct {
    char name[MAX_NAME];
    float marks;
} Student;

int main() {
    FILE *file = fopen("students.txt", "w");
    if (!file) {
        perror("Error opening file");
        return 1;
    }

    Student s;
    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", s.name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &s.marks);
        fprintf(file, "%s %.2f\n", s.name, s.marks);
    }

    fclose(file);
    printf("Data for 5 students saved to 'students.txt'.\n");
    return 0;
}
