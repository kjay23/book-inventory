#include <stdio.h>
#include <unistd.h>

#ifdef _WIN32
#include <Windows.h>
#define CLEAR_SCREEN() system("cls")
#else
#define CLEAR_SCREEN() printf("\033[H\033[J")
#endif

void status_industrial() {
    // Array to store book information
    char books[5][3][50] = {
        {"The Industries of the Future", "Alec Ross", "20"},
        {"The Second Machine Age: Work, Progress, and Prosperity in a Time of Brilliant Technologies", "Erik Brynjolfsson and Andrew McAfee", "20",},
        {"Factory Girls: From Village to City in a Changing China", "Leslie T. Chang", "40"},
        {"Industry 4.0: The Industrial Internet of Things", "Alasdair Gilchrist", "30"},
        {"Makers: The New Industrial Revolution", "Chris Anderson", "20"}
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

