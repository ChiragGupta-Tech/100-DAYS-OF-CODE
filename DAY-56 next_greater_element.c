#include <stdio.h>

void nextGreaterElement(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int next = -1;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }

        if (i > 0) {
            printf(",");
        }

        printf("%d", next);
    }

    printf("\n");
}

int main() {
    int n;

    scanf("%d", &n);

    if (n <= 0) {
        return 0;
    }

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    nextGreaterElement(arr, n);

    return 0;
}
