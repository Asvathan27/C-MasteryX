#include <stdio.h>

/**
 * Program to print numbers from 1 to 100 with the following rules:
 * - Multiples of both 3 and 5 are replaced with "FizzBuzz".
 * - Multiples of 3 are replaced with "Fizz".
 * - Multiples of 5 are replaced with "Buzz".
 * - All other numbers are printed as they are.
 */

int main() {
    printf("========================================\n");
    printf("           FizzBuzz (1 to 100)          \n");
    printf("========================================\n");

    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }

    return 0;
}
