#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%i %i", &a);
    printf("Hexacimal: %X   \n", a);
    printf("Octal: %o \n", a);
    return 0;
}