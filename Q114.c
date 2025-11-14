//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter string: ");
    scanf("%s", s);

    int n = strlen(s);
    int lastIndex[256]; // To store last index of each character
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int maxLen = 0;
    int start = 0; // Start index of current window

    for (int end = 0; end < n; end++) {
        // If character repeats, move start to right of previous occurrence
        if (lastIndex[(unsigned char)s[end]] >= start)
            start = lastIndex[(unsigned char)s[end]] + 1;

        // Update last seen index of current character
        lastIndex[(unsigned char)s[end]] = end;

        // Update max length
        int currLen = end - start + 1;
        if (currLen > maxLen)
            maxLen = currLen;
    }

    printf("%d\n", maxLen);

    return 0;
}


