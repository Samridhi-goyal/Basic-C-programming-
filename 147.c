//Q147: Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp, empRead;
    FILE *fp;

    // Input employee details
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    // --- Writing to binary file ---
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee details stored successfully in file.\n");

    // --- Reading from binary file ---
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(&empRead, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Displaying employee data read from file
    printf("\nEmployee Details Read From File:\n");
    printf("Name: %s\n", empRead.name);
    printf("ID: %d\n", empRead.id);
    printf("Salary: %.2f\n", empRead.salary);

    return 0;
}
