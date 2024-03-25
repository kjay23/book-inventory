#include <stdio.h>
#include <unistd.h>

#ifdef _WIN32
#include <Windows.h>
#define CLEAR_SCREEN() system("cls")
#else
#define CLEAR_SCREEN() printf("\033[H\033[J")
#endif

void status_compsys() {

    char books[5][3][50] = {
        {"Computer Systems: A Programmer's Perspective", "Randal E. Bryant and David R. O'Hallaron", "10"},
        {"Modern Operating Systems", "Andrew S. Tanenbaum and Herbert Bos", "10"},
        {"Computer Organization and Design: The Hardware/Software Interface", "David A. Patterson and John L. Hennessy", "15"},
        {"Operating System Concepts", "Abraham Silberschatz, Peter B. Galvin, and Greg Gagne", "15"},
        {"Structured Computer Organization", "Andrew S. Tanenbaum", "20"}
    // sunda lang na ang format sa itaas, usba ang book title ug name sa book tapos author
    };

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


