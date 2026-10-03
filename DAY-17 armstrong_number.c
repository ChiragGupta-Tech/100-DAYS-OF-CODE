#include <stdio.h>

int main() {
    int num, original, remainder, digits = 0;
    int sum = 0, power, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    // Count the number of digits
    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }

    temp = num;

    // Calculate the sum of powers of digits
    while (temp != 0) {
        remainder = temp % 10;
        power = 1;

        for (int i = 1; i <= digits; i++) {
            power = power * remainder;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
