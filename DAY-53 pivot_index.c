#include <stdio.h>

int findPivotIndex(int arr[], int n) {
    int totalSum = 0;
    int leftSum = 0;

    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (leftSum == totalSum - leftSum - arr[i]) {
            return i;
        }

        leftSum += arr[i];
    }

    return -1;
}

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findPivotIndex(arr, n));

    return 0;
}
