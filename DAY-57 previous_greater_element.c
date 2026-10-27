#include <stdio.h>

void previousGreaterElement(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int previous = -1;

        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                previous = arr[j];
                break;
            }
        }

        if (i > 0) {
            printf(",");
        }

        printf("%d", previous);
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

    previousGreaterElement(arr, n);

    return 0;
}
