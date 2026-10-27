#include <stdio.h>

int maxSumSubarray(int arr[], int n, int k) {
    if (k <= 0 || k > n) {
        return -1;
    }

    int sum = 0;

    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    int maxSum = sum;

    for (int i = k; i < n; i++) {
        sum = sum + arr[i] - arr[i - k];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    return maxSum;
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

    printf("%d\n", maxSumSubarray(arr, n, k));

    return 0;
}
}
