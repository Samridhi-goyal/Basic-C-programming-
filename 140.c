//Q140: Define a struct with enum Gender and print person's gender.

#include <stdio.h>
#include <string.h>

struct Person {
    enum Gender {MALE, FEMALE, OTHER} gender;
};

int main() {
    char input[10];
    struct Person p;

    scanf("Gender=%s", input);

    if (strcmp(input, "MALE") == 0)
        p.gender = MALE;
    else if (strcmp(input, "FEMALE") == 0)
        p.gender = FEMALE;
    else if (strcmp(input, "OTHER") == 0)
        p.gender = OTHER;
    else {
        printf("Invalid Gender");
        return 0;
    }

    switch (p.gender) {
        case MALE:   printf("Male"); break;
        case FEMALE: printf("Female"); break;
        case OTHER:  printf("Other"); break;
    }

    return 0;
}
