#include <stdio.h>

int main() {
    int matrix[10][10];
    int n, i, j;
    int distinct = 1;

    printf("Enter the order of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if diagonal elements are distinct
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }

        if (distinct == 0) {
            break;
        }
    }

    if (distinct == 1)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}
