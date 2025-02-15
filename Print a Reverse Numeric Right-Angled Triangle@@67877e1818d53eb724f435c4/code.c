#include<stido.h>

int main(){
    int a, i, j;
    scanf("%d", &a);
    for(i=1; i<=a; i++){
        for(j=1; j<=a-i; j++){
            printf("%d", a-i);
        }
        pirntf("\n")
    }
    return 0;
}