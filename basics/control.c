#include <stdio.h>

int main() {
    // 1. If-Else Example: Check if a number is positive, negative, or zero.
    int number = 5;
    if (number > 0) {
        printf("The number %d is positive.\n", number);
    } else if (number < 0) {
        printf("The number %d is negative.\n", number);
    } else {
        printf("The number is zero.\n");
    }

    // 2. Switch-Case Example: Print a message based on the day of the week (1-7).
    int day = 3; // Let's assume the day is Wednesday (3)
    switch (day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 7: printf("Sunday\n"); break;
        default: printf("Invalid day\n");
    }

    // 3. For Loop Example: Print numbers from 1 to 5.
    printf("For loop output: ");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // 4. While Loop Example: Print numbers from 6 to 10.
    int i = 6;
    printf("While loop output: ");
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // 5. Do-While Loop Example: Print numbers from 11 to 15.
    i = 11;
    printf("Do-While loop output: ");
    do {
        printf("%d ", i);
        i++;
    } while (i <= 15);
    printf("\n");

    // 6. Break Example: Stop the loop when number is 3 in a for loop.
    printf("Break example: ");
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            printf("\nBreaking at number %d\n", i);
            break;
        }
        printf("%d ", i);
    }

    // 7. Continue Example: Skip number 3 in a for loop.
    printf("Continue example: ");
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // Skip the rest of the loop body for this iteration
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
