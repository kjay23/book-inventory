#include <stdio.h>
#include <unistd.h> // For sleep
#include "headers/status_programming.h"

#ifdef _WIN32
#include <Windows.h>
#define CLEAR_SCREEN() system("cls")
#else
#define CLEAR_SCREEN() printf("\033[H\033[J")
#endif

void status_programming() {
    // Array to store book information
    char books[5][3][50] = {
        {"Clean Code", "Robert Cecil Martin ", "30"},
        {"The Pragmatic Programmer", "Andy Hunt & Dave Thomas", "20"},
        {"Refactoring", "Martin Fowler & Kent Beck ", "30"},
        {"The Mythical Man Month", "Fred Brooks", "50"},
        {"Code Complete", "Steve McConnell", "40"}
    // sunda lang na ang format sa itaas, usba ang book title ug name sa book tapos author
    };

    // Loop through each book
    for (int i = 0; i < 5; i++) {
        printf("\n\nBook %d Information:\n", i+1);
        // Loop through each detail of the book
        for (int j = 0; j < 3; j++) {
            switch(j) {
                case 0:
                    printf("\tBOOK TITLE: %s\n", books[i][j]);
                    break;
                case 1:
                    printf("\tAUTHOR: %s\n", books[i][j]);
                    break;
                case 2:
                    printf("\tNO. OF COPIES: %s\n", books[i][j]);
                    break;
                default:
                    break;
            // diri sa case kay ayaw lang hilabti... tobasakkk u?
            }
        }
        printf("\n");
    }


    return book_status_category();
    clear_screen();
}
