#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    if(a>=b && a>c){
        printf("%i", a);
    }else if(b>=a && b>=c){
        printf("%i", b);
    }else{
        printf("%i", c);
    }
    return 0;
}