#include <stdio.h>

void saveUserInfo() {
    FILE *file;
    char name[50];
    int age;

    file = fopen("info.txt", "w");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(file, "Name: %s\nAge: %d\n", name, age);

    fclose(file);

    printf("Data was successfully saved to info.txt.\n");
}

int main() {
    saveUserInfo();
    return 0;
}
