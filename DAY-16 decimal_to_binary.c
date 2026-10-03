#include <stdio.h>

int main() {
    int num, remainder;
    long long binary = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary representation: 0\n");
    } else {
        while (num > 0) {
            remainder = num % 2;
            binary = binary + remainder * place;
            num = num / 2;
            place = place * 10;
        }

        printf("Binary representation: %d \n", binary);
    }

    return 0;
}
