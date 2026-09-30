#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num >= 0) {
        if (num == 0) {
            printf("The number is zero.\n");
        } else {
            printf("%d is a positive number.\n", num);
        }
    } else {
        printf("%d is a negative number.\n", num);
    }

    return 0;
}
