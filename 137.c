//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>
#include <string.h>

int main() {
    enum Role {ADMIN, USER, GUEST};
    char input[10];

    scanf("%s", input);

    if (strcmp(input, "ADMIN") == 0) {
        printf("Welcome Admin!");
    }
    else if (strcmp(input, "USER") == 0) {
        printf("Welcome User!");
    }
    else if (strcmp(input, "GUEST") == 0) {
        printf("Welcome Guest!");
    }
    else {
        printf("Invalid Role");
    }

    return 0;
}
