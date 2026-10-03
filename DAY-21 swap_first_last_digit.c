#include <stdio.h>

int main() {
    int num, first, last, digits = 1;
    int power = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    last = num % 10;

    // Find the place value of the first digit
    while (num / power >= 10) {
        power = power * 10;
    }

    first = num / power;

    // Extract the middle part
    middle = num % power;
    middle = middle / 10;

    // Swap first and last digits
    result = last * power + middle * 10 + first;

    printf("Number after swapping first and last digits = %d\n", result);

    return 0;
}
