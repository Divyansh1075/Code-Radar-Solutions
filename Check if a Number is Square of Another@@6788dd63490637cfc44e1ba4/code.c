#include <stdio.h>



int main() {
    int a,b;
    scanf("%i %i", &a, &b);
    if(b == a**2){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}