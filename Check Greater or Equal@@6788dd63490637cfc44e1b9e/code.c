#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a, b;
    scanf("%i %i", &a, &b);
    if(a>b){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}