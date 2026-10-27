#include <stdio.h>

int findRepeatedElement(int arr[], int n) {
    int freq[n + 1];

    for (int i = 0; i <= n; i++) {
        freq[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;

        if (freq[arr[i]] == 2) {
            return arr[i];
        }
    }

    return -1;
}

int main() {
    int n;

    scanf("%d", &n);

    if (n <= 0) {
        printf("-1\n");
        return 0;
    }

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findRepeatedElement(arr, n));

    return 0;
}
