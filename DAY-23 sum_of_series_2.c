#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    double numerator, denominator;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        numerator = 2 * i;
        denominator = 4 * i - 1;

        sum = sum + numerator / denominator;
    }

    printf("Sum of the series = %.4lf\n", sum);

    return 0;
}
