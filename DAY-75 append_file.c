#include <stdio.h>

void appendToFile() {
    FILE *file;
    char filename[100];
    char text[200];

    printf("Enter the filename: ");
    scanf("%99s", filename);

    file = fopen(filename, "a");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    printf("Enter a line of text: ");
    getchar();  // Remove the leftover newline
    fgets(text, sizeof(text), stdin);

    fprintf(file, "%s", text);

    fclose(file);

    printf("Text appended successfully.\n");
}

int main() {
    appendToFile();
    return 0;
}
