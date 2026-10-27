#include <stdio.h>

void productExceptSelf(int nums[], int n, int answer[]) {
    int prefix = 1;

    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    int suffix = 1;

    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }
}

int main() {
    int n;

    scanf("%d", &n);

    if (n <= 0) {
        return 0;
    }

    int nums[n], answer[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    productExceptSelf(nums, n, answer);

    for (int i = 0; i < n; i++) {
        if (i > 0) {
            printf(",");
        }
        printf("%d", answer[i]);
    }

    printf("\n");

    return 0;
}
