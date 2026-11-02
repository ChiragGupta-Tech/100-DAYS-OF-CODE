#include <stdio.h>

void storeAndDisplayStudents() {
    FILE *file;
    int numberOfStudents, rollNumber, marks;
    char name[50];

    file = fopen("students.txt", "w");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    printf("Enter the number of students: ");
    scanf("%d", &numberOfStudents);

    for (int i = 0; i < numberOfStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%49s", name);

        printf("Roll number: ");
        scanf("%d", &rollNumber);

        printf("Marks: ");
        scanf("%d", &marks);

        fprintf(file, "%s %d %d\n", name, rollNumber, marks);
    }

    fclose(file);

    file = fopen("students.txt", "r");

    if (file == NULL) {
        printf("Error opening the file for reading.\n");
        return;
    }

    printf("\nStudent Records:\n");
    printf("Name\tRoll Number\tMarks\n");

    while (fscanf(file, "%49s %d %d", name, &rollNumber, &marks) == 3) {
        printf("%s\t%d\t\t%d\n", name, rollNumber, marks);
    }

    fclose(file);
}

int main() {
    storeAndDisplayStudents();
    return 0;
}
