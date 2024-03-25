#include <stdio.h>
#include <unistd.h>
#include "headers/addprogramming.h"

#ifdef _WIN32
#include <Windows.h>
#define CLEAR_SCREEN() system("cls")
#else
#define CLEAR_SCREEN() printf("\033[H\033[J")
#endif

void add_programming() {
    char book_name[100];
    char author[100];
    int pages;
    float price;

    printf("\n\nEnter the details of the book:\n");

    printf("Book Name: ");
    scanf("%s", book_name);

    printf("Author: ");
    scanf("%s", author);

    printf("Pages: ");
    scanf("%d", &pages);

    printf("Price: ");
    scanf("%f", &price);



    printf("\n\nBOOK ADDED.");
    sleep(3);
    clear_screen();
    // After inputting the book details, return to main
    add_book_category();
}

