#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int c, s;
    scanf("%i %i", &c, &s);
    if(s>c){
        printf("Profit");
    }else if(c>s){
        printf("Loss");
    }else{
        printf("No Porfit No Loss");
    }
    return 0;
}