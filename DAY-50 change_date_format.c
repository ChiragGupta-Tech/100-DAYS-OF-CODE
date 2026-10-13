#include <stdio.h>

int main() {
    char date[20];
    int day, month, year;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%19s", date);

    if (sscanf(date, "%d/%d/%d", &day, &month, &year) != 3) {
        printf("Invalid date format.\n");
        return 1;
    }

    if (month == 4) {
        printf("Formatted date: %02d-Apr-%04d\n", day, year);
    } else {
        printf("This program only converts April dates.\n");
    }

    return 0;
}
