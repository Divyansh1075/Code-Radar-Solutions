#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%i %i", &a, &b);
    if(a>0 || b>0){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}