#include <stdio.h>
#include <math.h>

/**
 * Program to check whether a given number is an Armstrong number.
 * An Armstrong number of n digits is an integer such that the sum of its
 * digits each raised to the power of n is equal to the number itself.
 * Example: 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
 */

int countDigits(int num) {
    int count = 0;
    if (num == 0) return 1;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

int isArmstrong(int num) {
    if (num < 0) return 0; // Armstrong numbers are defined for non-negative integers

    int originalNum = num;
    int digits = countDigits(num);
    long long sum = 0;

    int temp = num;
    while (temp != 0) {
        int remainder = temp % 10;
        sum += (long long)round(pow(remainder, digits));
        temp /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int number;

    printf("========================================\n");
    printf("        Armstrong Number Checker        \n");
    printf("========================================\n");
    printf("Enter an integer: ");

    if (scanf("%d", &number) != 1) {
        printf("Invalid input! Please enter a valid integer.\n");
        return 1;
    }

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is NOT an Armstrong number.\n", number);
    }

    return 0;
}
