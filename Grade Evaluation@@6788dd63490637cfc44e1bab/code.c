#include <stdio.h>

int main() {
    char grade;

    // Prompt the user to enter a grade
    
    scanf("%c", &grade);  // Input a character grade

    // Use a switch statement to evaluate the grade
    switch(grade) {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Good\n");
            break;
        case 'C':
            printf("Average\n");
            break;
        case 'D':
            printf("Below Average\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid grade\n");  // Handle invalid grade input
    }

    return 0;
}
