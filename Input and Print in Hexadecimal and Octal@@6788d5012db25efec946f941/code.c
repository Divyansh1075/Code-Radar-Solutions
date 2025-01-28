#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%i %i", a,b);
    printf("Hexacimal: %x\n", a);
    printf("Octal: %o\n", b);
    return 0;
}