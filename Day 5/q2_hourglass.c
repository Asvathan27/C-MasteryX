#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            if (j == i) {
                printf("*");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            if (j == i) {
                printf("*");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}
