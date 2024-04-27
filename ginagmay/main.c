#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
// mga pre-processors needed

#define LEFT(str, w) \
    ({int m = w + strlen(str); m % 2 ? (m + 1) / 2 : m / 2;})

#define RIGHT(str, w) \
({ int m = w - strlen(str); m % 2 ? (m - 1) / 2 : m / 2; })

#define STR_CENTER(str, width) \
    LEFT(str, width), str, RIGHT(str, width), ""

#define PRINTF_CENTER(width, start, fmt, end, ...) ({ \
    int n = snprintf(NULL, 0, fmt, __VA_ARGS__);     \
    int m = width - n;                               \
    int left = m % 2 ? (m + 1) / 2 : m / 2;          \
    int right = m % 2 ? (m - 1) / 2 : m / 2;         \
    printf(start "%*s" fmt "%*s" end, left, "",      \
           __VA_ARGS__, right, "");                  \
})

#define MYFORMAT_CENTER(width, fmt, ...)  \
    PRINTF_CENTER(40, "[", fmt  , "]\n", __VA_ARGS__)
    //para na ma center ang texts, duh


#ifdef _WIN32
#include <Windows.h>
#define CLEAR_SCREEN() system("cls")
#else
#define CLEAR_SCREEN() printf("\033[H\033[J")
#endif
// to clear screen kada balik main

// void functions
void add_book_category();
void add_programming();
void add_industrial();
void add_compsys();
void display_book_category();
void display_programming();
void display_industrial();
void display_compsys();
void book_status_category();
void status_programming();
void status_industrial();
void status_compsys();


// category sa 1. ADD BOOK
void add_book_category() {
    int category_choice;

    printf("\n\n");

    printf("Choose a category:\n\n");
    printf("1. PROGRAMMING\n");
    printf("2. INDUSTRIAL TECHNOLOGY\n");
    printf("3. COMPUTER SYSTEMS\n");
    printf("0. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &category_choice);

    switch (category_choice) {
        case 1:
            add_programming();
            break;
        case 2:
            add_industrial();
            break;
        case 3:
            add_compsys();
            break;
        case 0:
            sleep(1);
            CLEAR_SCREEN();
            return main();
        default:
            printf("ERROR!\n");
            break;
    }
}

#define MAX_LENGTH 100
// case 1

void add_programming() {
    char book_name[MAX_LENGTH];
    char author[MAX_LENGTH];
    int pages;
    float price;

    printf("\n\nEnter the details of the book:\n");

    printf("Book Name: ");
    getchar();
    fgets(book_name, MAX_LENGTH, stdin);
    book_name[strcspn(book_name, "\n")] = 0; // Remove newline character

    printf("Author: ");
    fgets(author, MAX_LENGTH, stdin);
    author[strcspn(author, "\n")] = 0;

    printf("Pages: ");
    scanf("%d", &pages);

    printf("Price: ");
    scanf("%f", &price);

    sleep(1);
    CLEAR_SCREEN();
    printf("\n\nResult:\n\n");

// dayon mugawas ang output
    printf("Book Name: %s\n", book_name);

    printf("Author: %s\n", author);

    printf("Pages: %d\n", pages);

    printf("Price: %.2f\n", price);

    printf("\n\nBOOK ADDED");
    sleep(1);

// diri nga part mangutana mubalik ba sa main or mu exit
        char returnToMain;
    printf("\n\nReturn to main menu? (Y/N): ");
    scanf(" %c", &returnToMain);

    if (returnToMain == 'Y' || returnToMain == 'y') {
        CLEAR_SCREEN();
        main();
    }
}

void add_industrial() {
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

    sleep(1);
    CLEAR_SCREEN();
    printf("\n\nResult:\n\n");


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
        CLEAR_SCREEN();
        main();
    }
}

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

    sleep(1);
    CLEAR_SCREEN();
    printf("\n\nResult:\n\n");


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
        CLEAR_SCREEN();
        main();
    }
}

// case 2, category sa 2. DISPLAY BOOK INFORMATION
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

    switch (category_choice) {
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
            CLEAR_SCREEN();
            return main();
        default:
            printf("ERROR!\n");
            break;
    }
}

void display_programming() {
    char books[5][4][50] = {
        {"Clean Code", "Robert Cecil Martin", "1210", "$20.00"},
        {"The Pragmatic Programmer", "Andy Hunt & Dave Thomas", "861", "$25.00"},
        {"Refactoring", "Martin Fowler & Kent Beck", "1150", "$15.00"},
        {"The Mythical Man Month", "Fred Brooks", "576", "$45.00"},
        {"Code Complete", "Steve McConnell", "440", "$50.00"}
    };

    for (int i = 0; i < 5; i++) {
        printf("\n\nBook %d Information:\n", i + 1);
        for (int j = 0; j < 4; j++) {
            switch (j) {
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
            }
        }
        printf("\n");
    }
    sleep(1);
    return display_book_category();
    CLEAR_SCREEN();
}

void display_industrial() {
    char books[5][4][50] = {
        {"The Industries of the Future", "Alec Ross", "320", "$20.00"},
        {"The Second Machine Age: Work, Progress, and Prosperity in a Time of Brilliant Technologies", "Erik Brynjolfsson and Andrew McAfee", "320", "$25.00"},
        {"Factory Girls: From Village to City in a Changing China", "Leslie T. Chang", "448", "$35.00"},
        {"Industry 4.0: The Industrial Internet of Things", "Alasdair Gilchrist", "384", "$30.00"},
        {"Makers: The New Industrial Revolution", "Chris Anderson", "272", "$15.00"}
    };

    for (int i = 0; i < 5; i++) {
        printf("\n\nBook %d Information:\n", i + 1);
        for (int j = 0; j < 4; j++) {
            switch (j) {
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
            }
        }
        printf("\n");
    }
    sleep(1);
    return display_book_category();
    CLEAR_SCREEN();
}

void display_compsys() {
    char books[5][4][50] = {
        {"Computer Systems: A Programmer's Perspective", "Randal E. Bryant and David R. O'Hallaron", "1120", "$100.00"},
        {"Modern Operating Systems", "Andrew S. Tanenbaum and Herbert Bos", "1110", "$100.00"},
        {"Computer Organization and Design: The Hardware/Software Interface", "David A. Patterson and John L. Hennessy", "800", "$99.00"},
        {"Operating System Concepts", "Abraham Silberschatz, Peter B. Galvin, and Greg Gagne", "976", "$80.00"},
        {"Structured Computer Organization", "Andrew S. Tanenbaum", "800", "$95.00"}
    };

    for (int i = 0; i < 5; i++) {
        printf("\n\nBook %d Information:\n", i + 1);
        for (int j = 0; j < 4; j++) {
            switch (j) {
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
            }
        }
        printf("\n");
    }
    sleep(1);
    return display_book_category();
    CLEAR_SCREEN();
}


// category sa 3. BOOK STATUS
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

    switch (category_choice) {
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
            CLEAR_SCREEN();
            return main();
        default:
            printf("ERROR!\n");
            break;
    }
}

void status_programming() {
    char books[5][3][50] = {
        {"Clean Code", "Robert Cecil Martin", "30"},
        {"The Pragmatic Programmer", "Andy Hunt & Dave Thomas", "20"},
        {"Refactoring", "Martin Fowler & Kent Beck", "30"},
        {"The Mythical Man Month", "Fred Brooks", "50"},
        {"Code Complete", "Steve McConnell", "40"}
    };

    for (int i = 0; i < 5; i++) {
        printf("\n\nBook %d Information:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            switch (j) {
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
            }
        }
        printf("\n");
    }
    sleep(1);
    return book_status_category();
    CLEAR_SCREEN();
}

void status_industrial() {
    char books[5][3][50] = {
        {"The Industries of the Future", "Alec Ross", "20"},
        {"The Second Machine Age: Work, Progress, and Prosperity in a Time of Brilliant Technologies", "Erik Brynjolfsson and Andrew McAfee", "20"},
        {"Factory Girls: From Village to City in a Changing China", "Leslie T. Chang", "40"},
        {"Industry 4.0: The Industrial Internet of Things", "Alasdair Gilchrist", "30"},
        {"Makers: The New Industrial Revolution", "Chris Anderson", "20"}
    };

    for (int i = 0; i < 5; i++) {
        printf("\n\nBook %d Information:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            switch (j) {
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
            }
        }
        printf("\n");
    }
    sleep(1);
    return book_status_category();
    CLEAR_SCREEN();
}

void status_compsys() {
    char books[5][3][50] = {
        {"Computer Systems: A Programmer's Perspective", "Randal E. Bryant and David R. O'Hallaron", "10"},
        {"Modern Operating Systems", "Andrew S. Tanenbaum and Herbert Bos", "10"},
        {"Computer Organization and Design: The Hardware/Software Interface", "David A. Patterson and John L. Hennessy", "15"},
        {"Operating System Concepts", "Abraham Silberschatz, Peter B. Galvin, and Greg Gagne", "15"},
        {"Structured Computer Organization", "Andrew S. Tanenbaum", "20"}
    };

    for (int i = 0; i < 5; i++) {
        printf("\n\nBook %d Information:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            switch (j) {
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
            }
        }
        printf("\n");
    }
    sleep(1);
    return book_status_category();
    CLEAR_SCREEN();
}

int main(int argc, char const *argv[]) {
    printf("%*s%*s\n\n", STR_CENTER("--- LIBRARY MANAGEMENT SYSTEM ---", 100));
    printf("[%*s%*s]\n", STR_CENTER("CREATED BY", 100));
    printf("[%*s%*s]\n", STR_CENTER(" LZMA", 100));

    int choice;
    printf("[%*s%*s]\n", STR_CENTER("=========================================================================", 100));
    printf("\n");

    printf("\t \t \t 1. === ADD BOOK\n");
    printf("\t \t \t 2. === DISPLAY BOOK INFORMATION\n");
    printf("\t \t \t 3. === BOOK STATUS\n");
    printf("\t \t \t 0. === EXIT\n");
    printf("\n ");

    printf("Select a choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            add_book_category();
            break;
        case 2:
            display_book_category();
            break;
        case 3:
            book_status_category();
            break;
        case 0:
            printf("NO DISPLAY");
            return 0;
        default:
            printf("ERROR!\n");
            return 1;
    }

    return 0;
}
