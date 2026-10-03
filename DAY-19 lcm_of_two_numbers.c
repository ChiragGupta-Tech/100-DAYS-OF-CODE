#include <stdio.h>

int main() {
    int num1, num2, lcm, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        max = num1;
    } else {
        max = num2;
    }

    lcm = max;

    while (lcm % num1 != 0 || lcm % num2 != 0) {
        lcm++;
    }

    printf("LCM = %d\n", lcm);

    return 0;
}
