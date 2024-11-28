//A program to manage a file.
//Author: Joseph Maitha (maijos8109).
//Ref.No: CT101/G/22636/24
//Date of coding: 28/11/2024
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

void writeToFile() {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return;
    }

    char sentence[MAX_LENGTH + 1];
    printf("Enter a sentence (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = 0;

    fprintf(file, "%s\n", sentence);
    fclose(file);
    printf("Sentence written to 'data.txt'.\n");
}

void readFromFile() {
    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return;
    }

    char buffer[MAX_LENGTH + 1];
    printf("Content of 'data.txt':\n");
    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer);
    }

    fclose(file);
}

void appendToFile() {
    FILE *file = fopen("data.txt", "a");
    if (file == NULL) {
        perror("Error opening file for appending");
        return;
    }

    char sentence[MAX_LENGTH + 1];
    printf("Enter another sentence to append (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = 0;

    fprintf(file, "%s\n", sentence);
    fclose(file);
    printf("Sentence appended to 'data.txt'.\n");
}

int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Write to file\n");
        printf("2. Read from file\n");
        printf("3. Append to file\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                writeToFile();
                break;
            case 2:
                readFromFile();
                break;
            case 3:
                appendToFile();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
