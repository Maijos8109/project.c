//A program to read and append a file.
//Author: Joseph Maitha (maijos8109).
//Date of coding: 28/11/2024.
#include <stdio.h>

#define MAX_NAME 50

typedef struct {
    char name[MAX_NAME];
    float marks;
} Student;

int main() {
    FILE *file = fopen("students.txt", "a");
    if (!file) {
        perror("Error opening file");
        return 1;
    }

    int n;
    printf("Enter the number of students to append: ");
    scanf("%d", &n);

    Student s;
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", s.name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &s.marks);
        fprintf(file, "%s %.2f\n", s.name, s.marks);
    }

    fclose(file);
    printf("Data for %d students appended to 'students.txt'.\n", n);
    return 0;
}
