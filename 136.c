//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>
#include <string.h>

int main() {
    enum Menu {ADD, SUBTRACT, MULTIPLY};
    char operation[15];
    int a, b;

    scanf("%s %d %d", operation, &a, &b);

    enum Menu choice;

    if (strcmp(operation, "ADD") == 0)
        choice = ADD;
    else if (strcmp(operation, "SUBTRACT") == 0)
        choice = SUBTRACT;
    else if (strcmp(operation, "MULTIPLY") == 0)
        choice = MULTIPLY;
    else {
        printf("Invalid Operation");
        return 0;
    }

    switch (choice) {
        case ADD:
            printf("%d", a + b);
            break;

        case SUBTRACT:
            printf("%d", a - b);
            break;

        case MULTIPLY:
            printf("%d", a * b);
            break;
    }

    return 0;
}
