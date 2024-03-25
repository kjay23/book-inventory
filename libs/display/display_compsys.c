#include <stdio.h>
#include <unistd.h>

#ifdef _WIN32
#include <Windows.h>
#define CLEAR_SCREEN() system("cls")
#else
#define CLEAR_SCREEN() printf("\033[H\033[J")
#endif

void display_compsys() {

    char books[5][4][50] = {
        {"Computer Systems: A Programmer's Perspective", "Randal E. Bryant and David R. O'Hallaron", "1120", "$100.00"},
        {"Modern Operating Systems", "Andrew S. Tanenbaum and Herbert Bos", "1110", "$100.00"},
        {"Computer Organization and Design: The Hardware/Software Interface", "David A. Patterson and John L. Hennessy", "800", "$99.00"},
        {"Operating System Concepts", "Abraham Silberschatz, Peter B. Galvin, and Greg Gagne", "976", "$80.00"},
        {"Structured Computer Organization", "Andrew S. Tanenbaum", "800", "$95.00"}
    // sunda lang na ang format sa itaas, usba ang book title ug name sa book tapos author

    // sheriferrrr
    };

    for (int i = 0; i < 5; i++) {
        printf("\n\nBook %d Information:\n", i+1);
        // Loop through each detail of the book
        for (int j = 0; j < 4; j++) {
            switch(j) {
                case 0:
                    printf("\tBOOK TITLE: %s\n", books[i][j]);
                    break;
                case 1:
                    printf("\tAUTHOR: %s\n", books[i][j]);
                    break;
                case 2:
                    printf("\tPAGES: %s\n", books[i][j]);
                    break;
                case 3:
                    printf("\tPRICE: %s\n", books[i][j]);
                    break;
                default:
                    break;
            // diri sa case kay ayaw lang hilabti... tobasakkk u?
            }
        }
        printf("\n");
    }


    return display_book_category();
    clear_screen();
}


