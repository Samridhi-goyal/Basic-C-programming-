//Q149: Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    // Dynamically allocate memory for one Student structure
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input details
    printf("Enter Student Details (Name Roll Marks): ");
    scanf("%s %d %d", s->name, &s->roll, &s->marks);

    // Output details
    printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll, s->marks);

    // Free allocated memory
    free(s);

    return 0;
}
