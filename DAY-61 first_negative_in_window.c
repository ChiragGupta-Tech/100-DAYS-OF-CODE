#include <stdio.h>

void firstNegative(int arr[], int n, int k) {
    if (k <= 0 || k > n) {
        printf("-1\n");
        return;
    }

    for (int i = 0; i <= n - k; i++) {
        int found = 0;

        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }

        if (found == 0) {
            printf("0");
        }

        if (i < n - k) {
            printf(" ");
        }
    }

    printf("\n");
}

int main() {
    int n, k;

    scanf("%d", &n);

    if (n <= 0) {
        return 0;
    }

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    firstNegative(arr, n, k);

    return 0;
}
