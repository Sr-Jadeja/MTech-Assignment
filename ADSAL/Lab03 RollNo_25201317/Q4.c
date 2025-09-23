/*Q4) Define a structure Student with fields name, rollNumber, and marks. Write a program to
input details of n students and then display the details of the student with the highest marks.*/

#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    int idx = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[idx].marks) {
            idx = i;
        }
    }

    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", students[idx].name);
    printf("Roll Number: %d\n", students[idx].rollNumber);
    printf("Marks: %.2f\n", students[idx].marks);

    return 0;
}
