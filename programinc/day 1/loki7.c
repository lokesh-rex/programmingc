#include <stdio.h>

int main() {
    int decimal, octal = 0, i = 1, remainder;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal != 0) {
        remainder = decimal % 8;
        octal += remainder * i;
        decimal /= 8;
        i *= 10;
    }

    printf("Octal equivalent: %d\n", octal);

    return 0;
}