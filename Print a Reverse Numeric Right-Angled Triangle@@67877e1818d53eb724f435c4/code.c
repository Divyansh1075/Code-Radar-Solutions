#include<stdio.h>

int main(){
    int a, i, j;
    scanf("%d", &a);
    for(i=1; i<=a; i++){
        for(j=0; j<=a-i; j++){
            printf("%d ", 1+j);
        }
        printf("\n");
    }
    return 0;
}