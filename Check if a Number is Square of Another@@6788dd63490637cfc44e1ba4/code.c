#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scnaf("%i %i", &a, &b);
    if(b == a**2){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}