
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char temp[200];
    int len1, len2;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2) {
        printf("Strings are not rotations.\n");
        return 0;
    }

    // Concatenate the first string with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check whether the second string exists in temp
    if (strstr(temp, str2) != NULL) {
        printf("Strings are rotations of each other.\n");
    } else {
        printf("Strings are not rotations.\n");
    }

    return 0;
}
