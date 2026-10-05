#include <stdio.h>

int main() {
    int arr[100], n, element, position = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to delete: ");
    scanf("%d", &element);

    // Find the element
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            position = i;
            break;
        }
    }

    if (position == -1) {
        printf("Element not found in the array.\n");
    } else {
        // Shift elements to the left
        for (int i = position; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--;

        printf("Array after deletion:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
