#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%i", &a);
    if(a%2==0){
        printf("Even");
    }else{
        printf("Odd");
    }
    return 0;
}