#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a, b;
    scanf("%i,%i", a,b);
    printf("%i", a+b);
    return 0;
}