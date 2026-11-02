#include <stdio.h>

void copyFile() {
    FILE *source, *destination;
    char sourceFile[100], destinationFile[100];
    int character;

    printf("Enter the source filename: ");
    scanf("%99s", sourceFile);

    printf("Enter the destination filename: ");
    scanf("%99s", destinationFile);

    source = fopen(sourceFile, "r");
    destination = fopen(destinationFile, "w");

    if (source == NULL) {
        printf("Error opening the source file.\n");
        return;
    }

    if (destination == NULL) {
        printf("Error opening the destination file.\n");
        fclose(source);
        return;
    }

    while ((character = fgetc(source)) != EOF) {
        fputc(character, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully.\n");
}

int main() {
    copyFile();
    return 0;
}
