#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct Book b;

    printf("Enter book title: ");
    if (scanf(" %[^\n]", b.title) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter book author: ");
    if (scanf(" %[^\n]", b.author) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter price: ");
    if (scanf("%f", &b.price) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("\nBook Details:\n");
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);

    return 0;
}
