#include <stdio.h>
#include <unistd.h>

#ifdef _WIN32
#include <Windows.h>
#define CLEAR_SCREEN() system("cls")
#else
#define CLEAR_SCREEN() printf("\033[H\033[J")
#endif

void display_industrial() {

    char books[5][4][50] = {
        {"The Industries of the Future", "Alec Ross", "320", "$20.00"},
        {"The Second Machine Age: Work, Progress, and Prosperity in a Time of Brilliant Technologies", "Erik Brynjolfsson and Andrew McAfee", "320", "$25.00"},
        {"Factory Girls: From Village to City in a Changing China", "Leslie T. Chang", "448", "$35.00"},
        {"Industry 4.0: The Industrial Internet of Things", "Alasdair Gilchrist", "384", "$30.00"},
        {"Makers: The New Industrial Revolution", "Chris Anderson", "272", "$15.00"}
    // sunda lang na ang format sa itaas, usba ang book title ug name sa book tapos author
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

            // okay chuy hhahahaah
            }
        }
        printf("\n");
    }


    return display_book_category();
    clear_screen();
}

