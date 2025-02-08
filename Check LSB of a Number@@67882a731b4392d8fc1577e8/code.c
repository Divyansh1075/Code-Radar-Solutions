#include <stdio.h>



int main() {
    int a, b;
    scanf("%i %i", &a, &b);
    if(a&1){
        printf("Set");
    }else{
        printf("Not Set");

    }
    return 0;
}