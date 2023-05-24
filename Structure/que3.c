/* 3.The following structure is for a library book with the following details: id, title, publisher, code (1 – Text 
book, 2 – Magazine, 3 – Reference book). If the code is 1, store no-of-copies. If code = 2, store the issue 
month name. If code = 3, store edition number. Also store the cost.
struct library_book
{
 int id; 
 char title[80];
 char publisher[20] ;
 int code; 
 union u { 
 int no_of_copies; 
 char month[10]; 
 int edition; 
 }info; 
 int cost;
};
Write a program to accept details of n books. Use switch - case to accept the code and details according to 
the code*/

#include <stdio.h>

struct library_book
{
    int id;
    char title[80];
    char publisher[20];
    int code;
    union u {
        int no_of_copies;
        char month[10];
        int edition;
    } info;
    int cost;
};

void accept_details(struct library_book b[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details of book %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &b[i].id);
        printf("Title: ");
        scanf("%s", b[i].title);
        printf("Publisher: ");
        scanf("%s", b[i].publisher);
        printf("Code (1-Textbook, 2-Magazine, 3-Reference book): ");
        scanf("%d", &b[i].code);
        switch (b[i].code) {
            case 1:
                printf("Number of copies: ");
                scanf("%d", &b[i].info.no_of_copies);
                break;
            case 2:
                printf("Issue month: ");
                scanf("%s", b[i].info.month);
                break;
            case 3:
                printf("Edition number: ");
                scanf("%d", &b[i].info.edition);
                break;
            default:
                printf("Invalid code\n");
                break;
        }
        printf("Cost: ");
        scanf("%d", &b[i].cost);
    }
}

void display_details(struct library_book b[], int n) {
    printf("Details of all books:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", b[i].id);
        printf("Title: %s\n", b[i].title);
        printf("Publisher: %s\n", b[i].publisher);
        printf("Code: %d\n", b[i].code);
        switch (b[i].code) {
            case 1:
                printf("Number of copies: %d\n", b[i].info.no_of_copies);
                break;
            case 2:
                printf("Issue month: %s\n", b[i].info.month);
                break;
            case 3:
                printf("Edition number: %d\n", b[i].info.edition);
                break;
        }
        printf("Cost: %d\n", b[i].cost);
    }
}

int main() {
    int n;
    struct library_book b[100];
    printf("Enter the number of books: ");
    scanf("%d", &n);
    accept_details(b, n);
    display_details(b, n);
    return 0;
}
