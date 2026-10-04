#include <stdio.h>

int countDigit(int n, int d) {
    if (n == 0) {
        return 0;
    }
    if (n % 10 == d) {
        return 1 + countDigit(n / 10, d);
    }
    return countDigit(n / 10, d);
}

int main() {
    int n;
    int d;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("Enter the digit to count (0-9): ");
    if (scanf("%d", &d) != 1 || d < 0 || d > 9) {
        printf("Invalid digit. Please enter a digit between 0 and 9.\n");
        return 1;
    }

    printf("The digit %d occurs %d times in %d\n", d, countDigit(n, d), n);

    return 0;
}
