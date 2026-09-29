#include <stdio.h>

/**
 * Program to check whether a given number is a Perfect Number.
 * A Perfect Number is a positive integer that is equal to the sum of its
 * proper positive divisors (excluding the number itself).
 * Example: 6 = 1 + 2 + 3 = 6
 * Example: 28 = 1 + 2 + 4 + 7 + 14 = 28
 */

int isPerfect(int num) {
    if (num <= 1) {
        return 0; // Proper divisors sum is only defined for numbers > 1
    }

    int sum = 1; // 1 is always a proper divisor for num > 1

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i * i != num) {
                sum += num / i; // Add paired divisor
            }
        }
    }

    return (sum == num);
}

int main() {
    int number;

    printf("========================================\n");
    printf("         Perfect Number Checker         \n");
    printf("========================================\n");
    printf("Enter a positive integer: ");

    if (scanf("%d", &number) != 1) {
        printf("Invalid input! Please enter a valid integer.\n");
        return 1;
    }

    if (number <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    if (isPerfect(number)) {
        printf("%d is a Perfect Number.\n", number);
    } else {
        printf("%d is NOT a Perfect Number.\n", number);
    }

    return 0;
}
