/*A program to show arrays
Name: JOseph Maitha
REF NO: CT101/G/22636/24
Date of coding: 7/11/2024*/
#include <stdio.h>

int main() {
    int scores[2][2] = { {65, 92}, {35, 70}, {84, 72}, {59, 67} };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("scores[%d][%d] = %d]\n ",i,j, scores[i][j]);
        }
        printf("\n");
    }
    return 0;
}
