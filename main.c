#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


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

    //to clear screen churva2

void clear_screen() {
    CLEAR_SCREEN();
}

int main(int argc, char const *argv[]) {
    printf("%*s%*s\n\n", STR_CENTER("--- LIBRARY MANAGEMENT SYSTEM ---", 100));
    printf("[%*s%*s]\n", STR_CENTER("MEMBERS OF THE GROUP", 100));
    printf("[%*s%*s]\n", STR_CENTER("1. KLEVIN JAY A. PORIO", 100));
    printf("[%*s%*s]\n", STR_CENTER("2. SHERLYN KATE C. YPO", 100));
    printf("[%*s%*s]\n", STR_CENTER("  3. JHUDIEL LEDENIO      ", 100));
    printf("[%*s%*s]\n", STR_CENTER("    4. MARIA CLARENCE F. CASIPE", 100));
    printf("[%*s%*s]\n", STR_CENTER("5. SHERIFER W. ARNADO  ", 100));
    printf("[%*s%*s]\n", STR_CENTER("6. JANJAN A. EGOC      ", 100));

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
    switch(choice){
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


