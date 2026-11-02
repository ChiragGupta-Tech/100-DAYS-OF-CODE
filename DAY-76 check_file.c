#include <stdio.h>

void checkAndReadFile() {
    FILE *file;
    char filename[100];
    char line[200];

    printf("Enter the filename: ");
    scanf("%99s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
        return;
    }

    printf("\nFile contents:\n");

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
}

int main() {
    checkAndReadFile();
    return 0;
}
