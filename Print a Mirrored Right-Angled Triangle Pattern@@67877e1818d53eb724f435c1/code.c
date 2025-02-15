#include<stdio.h>

int main(){

    int N,i, j, k;
    scanf("%i", &N);
    for(i=1; i<=N; i++){
        for(j=1; j<=N-1; j++){
            printf(" ");
            for(k=1; k<=N; k++){
                printf("*");
            }
        }
        printf("\n");
    }


}