//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[200];

    // Take filename input
    printf("Enter the file name: ");
    scanf("%99s", filename);

    // Open the file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Clear input buffer before taking text input with spaces
    getchar();

    // Take new line of text to append
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append text to the file
    fprintf(fp, "%s", text);

    // Close the file
    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
