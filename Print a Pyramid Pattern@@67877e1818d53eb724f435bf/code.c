#include <stdio.h>

int main(){
    int N, j, i, k;
    scanf("%i", &N);
    for(i=0; i<=N; i++){
        for(j=1; j<=i-1; j++){
            printf(" ");
        }
        for(k=1; k<=2*1-1; k++){
            printf("*");
        }
        printf("\n");
    
    }    

    return 0;
}