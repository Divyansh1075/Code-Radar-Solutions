#include <stdio.h>
#include <ctype.h>


int main() {
    char a;
    scanf("%c", &a);
    if(isupper(a)){
        printf("Uppercase");
    }if else{
        printf("Lowercase");
    }else{
        printf("Not an alphabet")
    }
    return 0;
}