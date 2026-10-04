#include <stdio.h>

int reverseNum(int n, int rev) {
    if (n == 0) {
        return rev;
    }
    return reverseNum(n / 10, rev * 10 + (n % 10));
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("Reversed number: %d\n", reverseNum(n, 0));

    return 0;
}
