#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%i", &a);
    if(a>0){
        printf("Positive";);
    }else if(a == 0){
        printf("Zero");
    }else{
        printf("Negative");
    }
    return 0;
}