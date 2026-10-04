#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        for (int space = 0; space < rows - 1 - i; space++) {
            printf("  ");
        }

        long long val = 1;
        for (int j = 0; j <= i; j++) {
            if (j == 0) {
                val = 1;
            } else {
                val = val * (i - j + 1) / j;
            }
            printf("%4lld", val);
        }
        printf("\n");
    }

    return 0;
}
