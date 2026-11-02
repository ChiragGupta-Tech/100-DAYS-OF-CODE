#include <stdio.h>
#include <ctype.h>

void countFileContents() {
    FILE *file;
    int character;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    file = fopen("info.txt", "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    while ((character = fgetc(file)) != EOF) {
        characters++;

        if (character == '\n') {
            lines++;
        }

        if (isspace(character)) {
            inWord = 0;
        } else if (inWord == 0) {
            words++;
            inWord = 1;
        }
    }

    fclose(file);

    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);
}

int main() {
    countFileContents();
    return 0;
}
