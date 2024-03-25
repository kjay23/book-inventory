#include <stdio.h>
#include <unistd.h> // For sleep
#include "headers/status_programming.h"
#include "headers/status_industrial.h"
#include "headers/status_compsys.h"
#include "headers/book_status_category.h"

void book_status_category() {
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
            status_programming();
            break;
        case 2:
            status_industrial();
            break;
        case 3:
            status_compsys();
            break;

        case 0:
            sleep(1);
            clear_screen();
            return main();
        default:
            printf("ERROR!\n");
            break;
    }
}

