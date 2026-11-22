#include <stdio.h>

enum Colors {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    BLACK
};

int main() {
    enum Colors color;

    const char *colorNames[] = {
        "RED",
        "GREEN",
        "BLUE",
        "YELLOW",
        "BLACK"
    };

    for (color = RED; color <= BLACK; color++) {
        printf("%s = %d\n", colorNames[color], color);
    }

    return 0;
}
