//Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    char number[100]; // To store the input number as a string
    int freq[10] = {0}; // Frequency array for digits 0-9

    // Read the number as a string
    scanf("%s", number);

    // Count frequency of each digit
    for (int i = 0; number[i] != '\0'; i++) {
        freq[number[i] - '0']++;
    }

    int maxFreq = 0;
    int digitWithMaxFreq = 0;

    // Find the digit with maximum frequency (lowest digit in case of tie)
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            digitWithMaxFreq = i;
        }
    }

    // Print the digit that occurs the most
    printf("%d\n", digitWithMaxFreq);

    return 0;
}
