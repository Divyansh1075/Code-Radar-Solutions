#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    if(a==b && a==c){
        printf("Equilateral");
    }else if(a==b || b==c || c==a){
        printf("Isosceles");
    }else{
        printf("Scalene");
    }
    return 0;
}