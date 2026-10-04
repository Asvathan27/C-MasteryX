#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        printf("*");
        if (i > 1) {
            for (int j = 1; j <= 2 * i - 3; j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        printf("*");
        if (i > 1) {
            for (int j = 1; j <= 2 * i - 3; j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
