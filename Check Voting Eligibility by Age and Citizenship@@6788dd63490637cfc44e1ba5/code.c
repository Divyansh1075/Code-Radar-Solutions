#include <stdio.h>


int main() {
    int a, b;
    scanf("%i %i", &a, &b);
    if(a>18 && a == 1){
        printf("Eligible");
    }if else(a<18 && a == 1){
        printf("Not Eligible");
    }else{
        printf("Not Eligible");
    }
    return 0;
}