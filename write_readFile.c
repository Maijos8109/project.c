//A program to read and write a file.
//Author: Joseph Maitha (maijos8109).
//Date of coding: 28/11/2024.
#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME 50

typedef struct {
    char name[MAX_NAME];
    float marks;
} Student;

int main() {
    FILE *file;
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    Student *students = (Student *)malloc(n * sizeof(Student));
    if (!students) {
        perror("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }

    file = fopen("students_struct.bin", "wb");
    if (!file) {
        perror("Error opening file for writing");
        free(students);
        return 1;
    }
    fwrite(students, sizeof(Student), n, file);
    fclose(file);
    printf("Data saved to 'students_struct.bin'.\n");

    file = fopen("students_struct.bin", "rb");
    if (!file) {
        perror("Error opening file for reading");
        free(students);
        return 1;
    }

    fread(students, sizeof(Student), n, file);
    printf("Data read from 'students_struct.bin':\n");
    for (int i = 0; i < n; i++) {
        printf("%s %.2f\n", students[i].name, students[i].marks);
    }

    fclose(file);
    free(students);
    return 0;
}
