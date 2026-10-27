#include <stdio.h>

int findMajorityElement(int arr[], int n) {
    int candidate = 0, count = 0;

    // Find the candidate using Boyer-Moore Voting Algorithm
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Verify whether the candidate is a majority element
    count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        return candidate;
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

    printf("%d\n", findMajorityElement(arr, n));

    return 0;
}
