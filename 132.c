//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>
#include <string.h>

int main() {

    enum Traffic {RED, YELLOW, GREEN};
    char input[10];

    scanf("%s", input);

    if (strcmp(input, "RED") == 0) {
        printf("Stop");
    }
    else if (strcmp(input, "YELLOW") == 0) {
        printf("Wait");
    }
    else if (strcmp(input, "GREEN") == 0) {
        printf("Go");
    }
    else {
        printf("Invalid Input");
    }

    return 0;
}
