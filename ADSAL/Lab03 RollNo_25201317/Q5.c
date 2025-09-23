/*Q5) Define a structure Employee with fields id, name, salary, and department. Write a program
to increase the salary of all employees in the "IT" department by 10%.*/

#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
    char department[20];
};

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details of employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        printf("Department: ");
        scanf("%s", emp[i].department);
    }

    for (int i = 0; i < n; i++) {
        if (strcmp(emp[i].department, "IT") == 0) {
            emp[i].salary *= 1.10;
        }
    }

    printf("\nUpdated employee details:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f, Department: %s\n", emp[i].id, emp[i].name, emp[i].salary, emp[i].department);
    }

    return 0;
}
