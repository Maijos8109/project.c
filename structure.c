#include <stdio.h>
#include <string.h>

struct Book{
    char tittle[30];
    char Author[30];
    int publication_year;
    char ISBN[13];
    float price;
}book1, book2;

int main(){
    printf("ENter the book tittle:");
    scanf("%s", &book1.tittle);
    book1.tittle = Introduction to C Programming;
    strcpy(book1.Author, "John Smith");
    strcpy(book1.publication_year, "2022");
    strcpy(book1.ISBN, "9780131103627");
    book1.price = 49.99;

    printf("Tittle: %s\n", book1.tittle);
    /*
    printf("Tittle: %s\n", book1.tittle);
    printf("Author: %s\n", book1.Author);
    printf("Publication Year: %S\n",book1.publication_year);
    printf("ISBN: %s\n", bokk1.ISBN);
    printf("Price: %f\n", book1.price);
    */
   return 0;
}
