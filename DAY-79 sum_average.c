#include <stdio.h>

void calculateSumAndAverage() {
    FILE *file;
    int number, count = 0;
    int sum = 0;
    float average;

    file = fopen("numbers.txt", "r");

    if (file == NULL) {
        printf("Error opening numbers.txt.\n");
        return;
    }

    while (fscanf(file, "%d", &number) == 1) {
        sum += number;
        count++;
    }

    fclose(file);

    if (count == 0) {
        printf("No integers found in the file.\n");
        return;
    }

    average = (float) sum / count;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
}

int main() {
    calculateSumAndAverage();
    return 0;
}
