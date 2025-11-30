//Q150: Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s;        // normal structure variable
    struct Student *ptr = &s;  // pointer to structure

    // Modify using pointer and -> operator
    printf("Enter Student Details (Name Roll Marks): ");
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    // Display modified data
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
