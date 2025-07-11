#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct Book
    {
        char name[50];
        int book_price;
        int page_of_book;
    } Book;
    Book myBook;
    strcpy(myBook.name, "Hero");
    myBook.book_price = 500;
    myBook.page_of_book = 320;
    printf("The name of the book is %s.\n", myBook.name);
    printf("%s has %d pages.\n", myBook.name, myBook.page_of_book);
    printf("The price of %s is %d.\n", myBook.name, myBook.book_price);

    return 0;
}