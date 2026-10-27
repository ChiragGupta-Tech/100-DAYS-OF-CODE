#include <stdio.h>

void maxInSubarrays(int arr[], int n, int k) {
    if (k <= 0 || k > n) {
        printf("-1\n");
        return;
    }

    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];

        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }

        if (i > 0) {
            printf(" ");
        }

        printf("%d", max);
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

    maxInSubarrays(arr, n, k);

    return 0;
}
