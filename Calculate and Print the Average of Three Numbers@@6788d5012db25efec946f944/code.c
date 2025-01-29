#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%i %i %i", &a, &b, &c);
    printf("%i", (a+b+c)/3);
    return 0;
}