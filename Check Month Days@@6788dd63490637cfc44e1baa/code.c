#include <stdio.h>

int main() {
    int month;

    // Prompt the user to enter the month number
    
    scanf("%d", &month);

    // Display the number of days in the month
    switch (month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
        printf("%d", 31);
            break;

        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            printf("%d", 30);
            break;

        case 2: // February
            printf("%d", 28);
            break;

        default:
            printf("Invalid month");
            break;
    }

    return 0;
}