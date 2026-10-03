#include <stdio.h>

int main() {
    int num, digit;
    int product = 1;
    int found = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;

        if (digit % 2 != 0) {
            product = product * digit;
            found = 1;
        }

        num = num / 10;
    }

    if (found) {
        printf("Product of odd digits = %d\n", product);
    } else {
        printf("There are no odd digits in the number.\n");
    }

    return 0;
}
