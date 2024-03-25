#include <stdio.h>
#include <unistd.h> // For sleep
#include "headers/display_programming.h"
#include "headers/display_industrial.h"
#include "headers/display_compsys.h"
#include "headers/display_book_category.h"

void display_book_category() {
    int category_choice;

    printf("\n\n");

    printf("Choose a category: \n\n");
    printf("1. PROGRAMMING\n");
    printf("2. INDUSTRIAL TECHNOLOGY\n");
    printf("3. COMPUTER SYSTEMS\n");
    printf("0. Exit\n\n");

    printf("Enter your choice: ");
    scanf("%d", &category_choice);

    switch(category_choice) {
        case 1:
            display_programming();
            break;
        case 2:
            display_industrial();
            break;
        case 3:
            display_compsys();
            break;

        case 0:
            sleep(1);
            clear_screen();
            return main(); // Return without calling main
        default:
            printf("ERROR!\n");
            break;
    }
}

