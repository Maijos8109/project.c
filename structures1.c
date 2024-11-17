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
    printf("ENter the book tittle:\n");
    scanf("%s", &book1.tittle);
    printf("Enter the Author:\n");
    scanf("%s", &book1.Author);
    printf("Enter Publication Year:\n");
    scanf("%d", &book1.publication_year);
    printf("Enter the ISBN:\n");
    scanf("%s", &book1.ISBN);
    printf("Enter book price:\n");
    scanf("%f", &book1.price);

    /*
    printf("Tittle: %s\n", book1.tittle);
    printf("Author: %s\n", book1.Author);
    printf("Publication Yeah: %d", book1.publication_yeah);
    printf("ISBN: %s\n", book1.ISBN);
    printf("Book Price: %f", book1.price);
    */
    return 0;
}   