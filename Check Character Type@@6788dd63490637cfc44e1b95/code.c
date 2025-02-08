#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);  // Read a single character

    // Check if it's a vowel
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel\n");
    }
    // Check if it's a consonant (any alphabet that is not a vowel)
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("Consonant\n");
    }
    // Check if it's a digit (0-9)
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    // If it's none of the above, it's a special character
    else {
        printf("Special character\n");
    }

    return 0;
}
