#include <stdio.h>

int main() {
    char light;

    // Prompt the user to enter the traffic light color
    
    scanf("%c", &light);  // Input the color character

    // Use a switch statement to evaluate the traffic light color
    switch(light) {
        case 'R':  // Red light
            printf("Stop\n");
            break;
        case 'G':  // Green light
            printf("Go\n");
            break;
        case 'Y':  // Yellow light
            printf("Slow Down\n");
            break;
        default:
            printf("Invalid input\n");  // Handle invalid input
    }

    return 0;
}
