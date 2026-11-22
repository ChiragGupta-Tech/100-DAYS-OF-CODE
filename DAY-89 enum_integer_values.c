#include <stdio.h>

enum Numbers {
    ONE = 1,
    FIVE = 5,
    TEN = 10
};

int main() {
    enum Numbers number;

    number = ONE;
    printf("ONE = %d\n", number);

    number = FIVE;
    printf("FIVE = %d\n", number);

    number = TEN;
    printf("TEN = %d\n", number);

    return 0;
}
