#include <stdio.h>


int main() {
    int a,b;
    scanf("%i", &a);
    if(a>0){
        printf("Poaitive");
    }
    elseif(a == 0){
        printf("Zero")
    }
    else{
        printf("Negative");
    }
    return 0;
}