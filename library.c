/*A program that calculate amount of fine a book is charged on overdue.
It calculate fine based on the number of days a book is overdue.
Author: Maijos8109
Ref No: CT101/G/22636/24
Date: 2/10/2024*/
#include <stdio.h>

int main()
{
 // Declaration and initialization of the book details
    int bookID;
    int dueDate;
    int returnDate;

    printf("Enter bookID\n");
    scanf("%d", &bookID);
    printf("Enter dueDate\n");
    scanf("%d", &dueDate);
    printf("Enter returnDate\n");
    scanf("%d", &returnDate);

    int overdue;
    overdue = returnDate-dueDate;
    printf("overdue is %d\n", overdue);

    int fineRate;
    int fineAmount;
    fineAmount = overdue*fineRate;

    if(overdue <=7)//overdue for the first 7 days
    {
        printf("fineRate = 20\n");
        fineRate = 20;
        fineAmount = overdue*fineRate;
        printf("fineAmount %d\n", fineAmount);
    }
    else if(overdue <=14)//overdue between 8 and 14 days
    {
        printf("fineRate = 50\n");
        fineRate = 50;
        fineAmount = overdue*fineRate;
        printf("fineAmount %d\n", fineAmount);
    }
    else if(overdue >=15)//overdue for 15 and more days
    {
        printf("fineRate = 100\n");
        fineRate = 100;
        fineAmount = overdue*fineRate;
        printf("fineAmount %d", fineAmount);
    }
    else if(overdue <= 0)//if the book was returned before or on the due date
    {
       printf("No fine! The book was returned on time.");
    }


    return 0;
}
