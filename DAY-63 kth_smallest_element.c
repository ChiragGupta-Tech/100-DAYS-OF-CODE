#include <stdio.h>

int kthSmallest(int arr[], int n, int k) {
    // Sort the array in ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    return arr[k - 1];
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

    if (k < 1 || k > n) {
        printf("-1\n");
        return 0;
    }

    printf("%d\n", kthSmallest(arr, n, k));

    return 0;
}
