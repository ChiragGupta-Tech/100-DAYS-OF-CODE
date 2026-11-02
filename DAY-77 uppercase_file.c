#include <stdio.h>
#include <ctype.h>

void convertToUppercase() {
    FILE *inputFile, *outputFile;
    int character;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    if (inputFile == NULL) {
        printf("Error opening input.txt.\n");
        return;
    }

    if (outputFile == NULL) {
        printf("Error opening output.txt.\n");
        fclose(inputFile);
        return;
    }

    while ((character = fgetc(inputFile)) != EOF) {
        fputc(toupper(character), outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Text converted to uppercase and saved in output.txt.\n");
}

int main() {
    convertToUppercase();
    return 0;
}
