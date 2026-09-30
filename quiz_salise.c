#include<stdio.h>
// Function to determine if the number is positive, negative, or zero
// and whether it is even or odd
void analyzeNumber(int number) {
    // Check positive, negative, or zero
    if (number > 0) {
        printf("The number is POSITIVE.\n");
    } else if (number < 0) {
        printf("The number is NEGATIVE.\n");
    } else {
        printf("The number is ZERO.\n");
    }

    // Check even or odd
    if (number % 2 == 0) {
        printf("The number is EVEN.\n");
    } else {
        printf("The number is ODD.\n");
    }
}

int main() {
    int number;
    int i;

    printf("=================================\n");
    printf("        NUMBER ANALYZER\n");
    printf("=================================\n");

    // Ask the user to enter five integers
    for (i = 1; i <= 5; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        // Call the function
        analyzeNumber(number);
    }

    printf("Program finished.\n");

    return 0;
}
