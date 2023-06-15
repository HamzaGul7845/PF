//Q no 2
#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        printf("*");
        for (j = 2; j < 2*i-1; j++) {
            printf(" ");
        }
        if (i != 1) {
            printf("*");
        }
        printf("\n");
    }

    for (i = rows-1; i >= 1; i--) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        printf("*");
        for (j = 2; j < 2*i-1; j++) {
            printf(" ");
        }
        if (i != 1) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

