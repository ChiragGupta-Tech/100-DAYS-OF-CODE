#include <stdio.h>

void readFile() {
    FILE *file;
    char line[100];

    file = fopen("info.txt", "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    printf("Contents of info.txt:\n");

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
}

int main() {
    readFile();
    return 0;
}
