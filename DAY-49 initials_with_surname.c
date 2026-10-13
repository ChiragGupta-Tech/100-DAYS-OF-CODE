
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove the newline character
    name[strcspn(name, "\n")] = '\0';

    // Find the last space
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    // Print initials of all words before the surname
    for (i = 0; i <= lastSpace; i++) {
        if (name[i] != ' ' && (i == 0 || name[i - 1] == ' ')) {
            printf("%c. ", toupper((unsigned char)name[i]));
        }
    }

    // Print the surname in full
    if (lastSpace != -1) {
        printf("%s", name + lastSpace + 1);
    } else {
        printf("%s", name);
    }

    printf("\n");

    return 0;
}
