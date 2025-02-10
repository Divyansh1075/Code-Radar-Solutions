#include <stdio.h>

int main() {
    int a, b;
    char symbol;

    // Read input values for a, b, and the symbol
    scanf("%i %i %c", &a, &b, &symbol);

    // Perform the operation based on the symbol
    if (symbol == '+') {
        printf("%i", a + b);
    } else if (symbol == '-') {
        printf("%i", a - b);
    } else if (symbol == '*') {
        printf("%i", a * b);
    } else if (symbol == '/') {
        if (b != 0) {
            printf("%i", a / b);
        } else {
            printf("Error: Division by zero");
        }
    } else if (symbol == '%') {
        printf("%i", a % b);
    } else {
        printf("Error: Invalid symbol");
    }

    return 0;
}