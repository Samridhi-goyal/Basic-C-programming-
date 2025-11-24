//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>
#include <ctype.h>  // for isalpha(), tolower()

int main() {
    FILE *fp;
    char filename[100] = "text.txt";
    char ch;
    int vowels = 0, consonants = 0;

    // Open file in read mode
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Read each character from file
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch); // Convert to lowercase for uniform comparison

        if (isalpha(ch)) { // Check if it's a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    // Display the result
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
