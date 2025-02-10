#include <stdio.h>


int main() {
    int a,b;
    char symbol;
    scanf("%i %i %c", &a, &b, &symbol);
    if (symbol=='+'){
        printf("%i", a+b);
    }else if(symbol=='-'){
        printf("%i", a-b);
    }else if(symbol=='*'){
        printf("%i", a*b);
    }else if(symbol=='/'){
        printf("%i", a/b);
    }
    return 0;

}