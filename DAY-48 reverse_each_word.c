
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, start, end;
    char temp;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    i = 0;

    while (str[i] != '\0') {
        // Skip spaces
        if (str[i] == ' ') {
            i++;
            continue;
        }

        // Find the beginning of the word
        start = i;

        // Find the end of the word
        while (str[i] != '\0' && str[i] != ' ') {
            i++;
        }

        end = i - 1;

        // Reverse the current word
        while (start < end) {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;

            start++;
            end--;
        }
    }

    printf("Result: %s\n", str);

    return 0;
}
