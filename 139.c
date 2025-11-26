//Q139: Show that enums store integers by printing assigned values.

#include <stdio.h>

int main() {
    enum Status {SUCCESS, FAILURE, TIMEOUT};

    printf("SUCCESS=%d, ", SUCCESS);
    printf("FAILURE=%d, ", FAILURE);
    printf("TIMEOUT=%d", TIMEOUT);

    return 0;
}
