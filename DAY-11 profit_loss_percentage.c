#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss, percentage;

    printf("Enter cost price: ");
    scanf("%f", &costPrice);

    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        percentage = (profit / costPrice) * 100;

        printf("Profit = %f\n", profit);
        printf("Profit Percentage = %f%%\n", percentage);
    }
    else if (sellingPrice < costPrice) {
        loss = costPrice - sellingPrice;
        percentage = (loss / costPrice) * 100;

        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %f%%\n", percentage);
    }
    else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
