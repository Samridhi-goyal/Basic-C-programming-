//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourceName[100], destName[100];
    char ch;

    // Take filenames from the user
    printf("Enter source file name: ");
    scanf("%99s", sourceName);

    printf("Enter destination file name: ");
    scanf("%99s", destName);

    // Open the source file in read mode
    sourceFile = fopen(sourceName, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file %s\n", sourceName);
        return 1;
    }

    // Open the destination file in write mode
    destFile = fopen(destName, "w");
    if (destFile == NULL) {
        printf("Error: Could not create destination file %s\n", destName);
        fclose(sourceFile);
        return 1;
    }

    // Copy content character by character
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    printf("File copied successfully to %s\n", destName);

    return 0;
}
