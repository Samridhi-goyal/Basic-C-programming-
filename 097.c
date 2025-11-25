//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i;

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
    if (name[len - 1] == '\n')
        name[len - 1] = '\0';  // Remove newline if present

    // Print the first initial (if not space)
    if (name[0] != ' ')
        printf("%c.", toupper(name[0]));

    // Loop through the string to find initials after spaces
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ')
            printf("%c.", toupper(name[i]));
    }

    printf("\n");
    return 0;
}
