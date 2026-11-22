#include <stdio.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum UserRole role;

    for (role = ADMIN; role <= GUEST; role++) {
        switch (role) {
            case ADMIN:
                printf("ADMIN: You have full access.\n");
                break;

            case USER:
                printf("USER: You have standard access.\n");
                break;

            case GUEST:
                printf("GUEST: You have limited access.\n");
                break;
        }
    }

    return 0;
}
