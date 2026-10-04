#include <stdio.h>

struct Employee {
    int id;
    char name[100];
    double salary;
};

int main() {
    struct Employee e;

    printf("Enter employee ID: ");
    if (scanf("%d", &e.id) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter employee name: ");
    if (scanf(" %[^\n]", e.name) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter salary: ");
    if (scanf("%lf", &e.salary) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("\nEmployee Details:\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2lf\n", e.salary);

    return 0;
}
