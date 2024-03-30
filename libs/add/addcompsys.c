#include <stdio.h>
#include <unistd.h>

#ifdef _WIN32
#include <Windows.h>
#define CLEAR_SCREEN() system("cls")
#else
#define CLEAR_SCREEN() printf("\033[H\033[J")
#endif

void add_compsys() {
    char book_name[100];
    char author[100];
    int pages;
    float price;

    printf("Enter the details of the book:\n");

    printf("Book Name: ");
    scanf("%s", book_name);

    printf("Author: ");
    scanf("%s", author);

    printf("Pages: ");
    scanf("%d", &pages);

    printf("Price: ");
    scanf("%f", &price);

// dayon mugawas ang output
    printf("Book Name: %s\n", book_name);

    printf("Author: %s\n", author);

    printf("Pages: %d\n", pages);

    printf("Price: %.2f\n", price);


    printf("\n\nBOOK ADDED");
    sleep(1);

            char returnToMain;
    printf("\n\nReturn to main menu? (Y/N): ");
    scanf(" %c", &returnToMain);

    if (returnToMain == 'Y' || returnToMain == 'y') {
        clear_screen();
        main();
}
}
