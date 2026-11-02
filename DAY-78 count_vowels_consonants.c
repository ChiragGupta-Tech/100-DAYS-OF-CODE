#include <stdio.h>
#include <ctype.h>

void countVowelsAndConsonants() {
    FILE *file;
    int character;
    int vowels = 0, consonants = 0;

    file = fopen("input.txt", "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    while ((character = fgetc(file)) != EOF) {
        character = tolower(character);

        if (character >= 'a' && character <= 'z') {
            if (character == 'a' || character == 'e' ||
                character == 'i' || character == 'o' ||
                character == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(file);

    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);
}

int main() {
    countVowelsAndConsonants();
    return 0;
}
