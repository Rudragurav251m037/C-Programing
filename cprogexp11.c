// Rudra Gurav
//FE Mechanical 
//251M037
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

void addEmployee() {
    FILE *file;
    struct Employee emp;

    file = fopen("employee.db", "ab");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    fwrite(&emp, sizeof(struct Employee), 1, file);
    fclose(file);
    printf("Employee added successfully!\n");
}

void displayEmployees() {
    FILE *file;
    struct Employee emp;

    file = fopen("employee.db", "rb");
    if (file == NULL) {
        printf("No employees found!\n");
        return;
    }

    printf("Employee Details:\n");
    while (fread(&emp, sizeof(struct Employee), 1, file) == 1) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", emp.id, emp.name, emp.salary);
    }
    fclose(file);
}

void searchEmployee() {
    FILE *file;
    struct Employee emp;
    int id, found = 0;

    file = fopen("employee.db", "rb");
    if (file == NULL) {
        printf("No employees found!\n");
        return;
    }

    printf("Enter Employee ID to search: ");
    scanf("%d", &id);

    while (fread(&emp, sizeof(struct Employee), 1, file) == 1) {
        if (emp.id == id) {
            printf("Employee found: ID: %d, Name: %s, Salary: %.2f\n", emp.id, emp.name, emp.salary);
            found = 1;
            break;
        }
    }
    if (!found) printf("Employee not found!\n");
    fclose(file);
}

int main() {
    int choice;
    while (1) {
        printf("Employee Database\n1. Add Employee\n2. Display Employees\n3. Search Employee\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addEmployee(); break;
            case 2: displayEmployees(); break;
            case 3: searchEmployee(); break;
            case 4: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}