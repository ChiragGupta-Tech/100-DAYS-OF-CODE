#include <stdio.h>

enum MenuChoice {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    enum MenuChoice choice;
    int num1, num2, result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nMenu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case ADD:
            result = num1 + num2;
            printf("Result = %d\n", result);
            break;

        case SUBTRACT:
            result = num1 - num2;
            printf("Result = %d\n", result);
            break;

        case MULTIPLY:
            result = num1 * num2;
            printf("Result = %d\n", result);
            break;

        default:
            printf("Invalid menu choice.\n");
    }

    return 0;
}
