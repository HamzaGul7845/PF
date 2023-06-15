#include <stdio.h>

int main() {
    int num, digit, count[10] = {0}; // initialize count array with 0
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    printf("Digit:\t 0 1 2 3 4 5 6 7 8 9\n");
    printf("Count:\t");
    for(int i=0; i<10; i++) {
        printf(" %d", count[i]);
    }
    return 0;
}

