
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};
    int i, anagram = 1;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Ignore spaces and letter case
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != ' ')
            freq[(unsigned char)tolower((unsigned char)str1[i])]++;
    }

    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] != ' ')
            freq[(unsigned char)tolower((unsigned char)str2[i])]--;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            anagram = 0;
            break;
        }
    }

    if (anagram)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}
