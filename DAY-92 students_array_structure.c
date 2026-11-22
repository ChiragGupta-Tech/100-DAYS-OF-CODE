#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int i;

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

    printf("Student Details\n");
    printf("-------------------------\n");

    for (i = 0; i < 5; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Marks: %.2f\n", students[i].marks);
        printf("-------------------------\n");
    }

    return 0;
}
