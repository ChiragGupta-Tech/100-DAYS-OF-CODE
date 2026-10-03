#include <stdio.h>

int main() {
    int num, digit, complement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;

        if (digit == 0) {
            digit = 1;
        } else if (digit == 1) {
            digit = 0;
        } else {
            printf("Invalid binary number.\n");
            return 0;
        }

        complement = complement + digit * place;
        place = place * 10;
        num = num / 10;
    }

    printf("1's complement = %d\n", complement);

    return 0;
}
