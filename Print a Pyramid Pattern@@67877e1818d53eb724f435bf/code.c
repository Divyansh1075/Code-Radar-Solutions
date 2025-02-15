#include <stdio.h>

int main(){
    int N, j, i, k;
    scanf("%i", &N);
    for(i=1; i<=N; i++){
        for(j=1; j<=N-1; j++){
            printf(" ");
        }
        for(k=1; k<=2*1-1; k++){
            printf("*");
        }
        printf("\n");
    
    }    

    return 0;
}