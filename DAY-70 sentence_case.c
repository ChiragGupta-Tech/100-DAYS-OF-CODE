#include <ctype.h>
#include <stdio.h>

void convertToSentenceCase(char text[]) {
    int sentenceStart = 1;

    for (int i = 0; text[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)text[i];

        if (sentenceStart && isalpha(ch)) {
            text[i] = (char)toupper(ch);
            sentenceStart = 0;
        } else if (isalpha(ch)) {
            text[i] = (char)tolower(ch);
        }

        if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
            sentenceStart = 1;
        }
    }
}

int main(void) {
    char text[1000];

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    convertToSentenceCase(text);

    printf("Sentence case: %s", text);

    return 0;
}
