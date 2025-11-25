//Q133: Create an enum for months and print how many days each month has.

#include <stdio.h>
#include <string.h>

int main() {
    enum Months {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
    char input[5];

    scanf("%s", input);

    if (strcmp(input, "JAN") == 0 || strcmp(input, "MAR") == 0 || 
        strcmp(input, "MAY") == 0 || strcmp(input, "JUL") == 0 ||
        strcmp(input, "AUG") == 0 || strcmp(input, "OCT") == 0 ||
        strcmp(input, "DEC") == 0) {
        
        printf("31 days");
    }
    else if (strcmp(input, "APR") == 0 || strcmp(input, "JUN") == 0 ||
             strcmp(input, "SEP") == 0 || strcmp(input, "NOV") == 0) {
        
        printf("30 days");
    }
    else if (strcmp(input, "FEB") == 0) {
        printf("28 or 29 days");
    }
    else {
        printf("Invalid Input");
    }

    return 0;
}
