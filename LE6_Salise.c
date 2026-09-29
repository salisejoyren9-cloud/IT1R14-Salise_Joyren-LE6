#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main() {
    int choice;
    int num1, num2, result;
 
    while (1) {
        printf("\nMultiple functions to perform Arithmetic Operations\n\n");
        
        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);

        printf("Choose Operation:\n");
        printf("[1] Addition\n");
        printf("[2] Subtraction\n");
        printf("[3] Multiplication\n");
        printf("[4] Division\n");
        printf("[5] Exit Program\n");
        printf("Enter choice [1-5]: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("%d + %d = %d\n", num1, num2, result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("%d - %d = %d\n", num1, num2, result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("%d * %d = %d\n", num1, num2, result);
                break;
            case 4:
                
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    result = divide(num1, num2);
                    printf("%d / %d = %.2f\n", num1, num2, result);
                }
                break;
            case 5:
                printf("Exiting Program. byebye!\n");
                return 0; 
            default:
                printf("Invalid choice! Please choose a number between 1 and 5.\n");
        }
    }

    return 0;
}


int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}
