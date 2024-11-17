#include <stdio.h>

int main() {
    FILE *file;       // Pointer to a FILE object
    char data[100];   // Array to store data to be read from the file

    // Step 1: Writing to a file
    file = fopen("example.txt", "w");  // Open file in write mode
    if (file == NULL) {  // Check if the file was opened successfully
        printf("Error opening the file for writing.\n");
        return 1;
    }

    // Writing data to the file
    fprintf(file, "Hello, World!\n");
    fprintf(file, "This is a demonstration of file handling in C.\n");

    // Close the file after writing
    fclose(file);
    printf("Data written to the file successfully.\n");

    // Step 2: Reading from the file
    file = fopen("example.txt", "r");  // Open file in read mode
    if (file == NULL) {  // Check if the file was opened successfully
        printf("Error opening the file for reading.\n");
        return 1;
    }

    // Reading the file line by line
    printf("\nReading data from the file:\n");
    while (fgets(data, sizeof(data), file) != NULL) {  // Read a line from the file
        printf("%s", data);  // Print the read line
    }

    // Close the file after reading
    fclose(file);

    return 0;
}
