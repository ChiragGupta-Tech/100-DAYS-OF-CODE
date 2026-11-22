#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int i, highestIndex = 0;

    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Roll number: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    for (i = 1; i < 5; i++) {
        if (students[i].marks > students[highestIndex].marks) {
            highestIndex = i;
        }
    }

    printf("Student with Highest Marks\n");
    printf("Name: %s\n", students[highestIndex].name);
    printf("Roll Number: %d\n", students[highestIndex].roll_no);
    printf("Marks: %.2f\n", students[highestIndex].marks);

    return 0;
}
