#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char longest[200];
    int i, j, maxLength = 0;
    int start, length;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    i = 0;

    while (str[i] != '\0') {
        // Skip spaces
        while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            i++;
        }

        start = i;
        length = 0;

        // Count characters in the current word
        while (str[i] != '\0' && str[i] != ' ' &&
               str[i] != '\n' && str[i] != '\t') {
            length++;
            i++;
        }

        // Update the longest word
        if (length > maxLength) {
            maxLength = length;

            for (j = 0; j < length; j++) {
                longest[j] = str[start + j];
            }

            longest[length] = '\0';
        }
    }

    if (maxLength > 0) {
        printf("Longest word: %s\n", longest);
        printf("Length: %d\n", maxLength);
    } else {
        printf("No word found.\n");
    }

    return 0;
}
