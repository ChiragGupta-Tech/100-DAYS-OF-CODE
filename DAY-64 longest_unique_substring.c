#include <stdio.h>
#include <string.h>

int longestSubstring(char s[]) {
    int n = strlen(s);
    int maxLength = 0;

    for (int i = 0; i < n; i++) {
        int visited[256] = {0};
        int length = 0;

        for (int j = i; j < n; j++) {
            unsigned char ch = (unsigned char)s[j];

            if (visited[ch]) {
                break;
            }

            visited[ch] = 1;
            length++;
        }

        if (length > maxLength) {
            maxLength = length;
        }
    }

    return maxLength;
}

int main() {
    char s[1000];

    fgets(s, sizeof(s), stdin);

    s[strcspn(s, "\n")] = '\0';

    printf("%d\n", longestSubstring(s));

    return 0;
}
