#include<stdio>

int main(){
    int a, i, j;
    scanf("%d", &a);
    for(i=1; i<=a; i++){
        for(j=a-i; j>=1; j--){
            printf(" ");
        }
        for(k=0; k<=i-1; k++){
            printf("%d", 1+i);
        }
        printf("\n");
    }
    return 0;
}