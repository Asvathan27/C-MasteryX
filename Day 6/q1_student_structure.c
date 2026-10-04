#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    printf("Enter student name: ");
    if (scanf(" %[^\n]", s.name) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter roll number: ");
    if (scanf("%d", &s.roll_no) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter marks: ");
    if (scanf("%f", &s.marks) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
