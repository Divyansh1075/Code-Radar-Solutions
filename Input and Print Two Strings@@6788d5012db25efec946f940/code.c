#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[50], b[50];
    scanf("%c %c",&a, &b);
    printf("You entered: %s and %s", a, b);
    return 0;
}