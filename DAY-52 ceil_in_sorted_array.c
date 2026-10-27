#include<stdio.h>

int findCeil(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
       int mid = low + (high - low) / 2;

    if (arr[mid] >= x) {
        ans = mid;
        high = mid - 1;
    } else {
        low = mid + 1;
    }
}

  return ans;
}

int main() {
    int n, x;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
       scanf("%d", &x);
}

   scanf("%d", &x);

   printf("%d\n", findCeil(arr, n, x));

   return 0;
}
