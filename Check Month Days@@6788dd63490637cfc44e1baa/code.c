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
            break;

        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            printf("Number of days: 30\n");
            break;

        case 2: // February
            printf("Number of days: 28\n");
            break;

        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
            break;
    }

    return 0;
}