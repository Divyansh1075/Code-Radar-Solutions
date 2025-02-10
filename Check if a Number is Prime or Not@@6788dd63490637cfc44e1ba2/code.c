#include <stdio.h>

int main() {
    int a;
    scanf("%i", &a);  // Take input

    // Check for prime manually for small numbers
    if (a == 2 || a == 3 || a == 5 || a == 7) {
        printf("Prime\n");
    } else if (a <= 1 || a % 2 == 0 || a % 3 == 0 || a % 5 == 0 || a % 7 == 0) {
        printf("Not Prime\n");
    } else {
        printf("Prime\n");
    }

    return 0;
}
