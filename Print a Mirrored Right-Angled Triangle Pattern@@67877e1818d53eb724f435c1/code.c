#include<stdio.h>

int main(){

    int N,i, j, k;
    scanf("%i", &N);
    for(i=1; i<=N; i++){
        for(j=N-1; j>=1; j--){
            printf(" ");
            for(k=N; k>=1; k--){
                printf("*");
            }
        }
        printf("\n");
    }


}