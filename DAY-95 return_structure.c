#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTopStudent(struct Student students[], int size) {
    int i, highestIndex = 0;

    for (i = 1; i < size; i++) {
        if (students[i].marks > students[highestIndex].marks) {
            highestIndex = i;
        }
    }

    return students[highestIndex];
}

int main() {
    struct Student students[3] = {
        {"Rahul", 101, 85.5},
        {"Priya", 102, 92.0},
        {"Aman", 103, 88.5}
    };

    struct Student topStudent = findTopStudent(students, 3);

    printf("Top Student Details\n");
    printf("Name: %s\n", topStudent.name);
    printf("Roll Number: %d\n", topStudent.roll_no);
    printf("Marks: %.2f\n", topStudent.marks);

    return 0;
}
