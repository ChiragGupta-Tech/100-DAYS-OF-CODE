
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    for (i = 0; name[i] != '\0'; i++) {
        if (i == 0 && name[i] != ' ' && name[i] != '\n') {
            printf("%c.", toupper((unsigned char)name[i]));
        }
        else if (name[i] == ' ' &&
                 name[i + 1] != ' ' &&
                 name[i + 1] != '\0' &&
                 name[i + 1] != '\n') {
            printf(" %c.", toupper((unsigned char)name[i + 1]));
        }
    }

    printf("\n");

    return 0;
}
