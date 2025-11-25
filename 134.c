//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>
#include <string.h>

int main() {
    enum Status {SUCCESS, FAILURE, TIMEOUT};
    char input[10];

    scanf("%s", input);

    if (strcmp(input, "SUCCESS") == 0) {
        printf("Operation successful");
    }
    else if (strcmp(input, "FAILURE") == 0) {
        printf("Operation failed");
    }
    else if (strcmp(input, "TIMEOUT") == 0) {
        printf("Operation timed out");
    }
    else {
        printf("Invalid Input");
    }

    return 0;
}
