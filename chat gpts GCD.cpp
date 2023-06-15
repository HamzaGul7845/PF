#include <stdio.h>

int main() {
    int num1, num2, gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    while (num1 != num2) {
        if (num1 > num2) {
            num1 -= num2;
        }
        else {
            num2 -= num1;
        }
    }
    gcd = num1;
    printf("GCD of %d and %d is %d", num1, num2, gcd);
    return 0;
}

