#include <stdio.h>

int main(){
    int N, j, i;
    scanf("%i", &N);
    for(i=1; i<=N; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}