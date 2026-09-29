#include <stdio.h>

// Helper function to calculate power of an integer: base^exp
long long power(int base, int exp) {
    long long res = 1;
    for (int i = 0; i < exp; i++) {
        res *= base;
    }
    return res;
}

// Function to count the number of digits in an integer
int countDigits(long long num) {
    if (num == 0) return 1;
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(long long num) {
    if (num < 0) return 0; // Armstrong numbers are non-negative
    
    int n = countDigits(num);
    long long temp = num;
    long long sum = 0;
    
    while (temp > 0) {
        int digit = temp % 10;
        sum += power(digit, n);
        temp /= 10;
    }
    
    return sum == num;
}

int main() {
    long long number;
    
    printf("==========================================\n");
    printf("        ARMSTRONG NUMBER CHECKER          \n");
    printf("==========================================\n");
    printf("Enter a positive integer: ");
    
    if (scanf("%lld", &number) != 1 || number < 0) {
        printf("Invalid input! Please enter a non-negative integer.\n");
        return 1;
    }
    
    int digits = countDigits(number);
    long long temp = number;
    
    printf("\nCalculation breakdown:\n");
    printf("%lld = ", number);
    
    // Show step-by-step breakdown
    long long sum = 0;
    long long divisor = 1;
    for (int i = 1; i < digits; i++) {
        divisor *= 10;
    }
    
    long long tempForPrint = number;
    while (divisor > 0) {
        int digit = (tempForPrint / divisor) % 10;
        sum += power(digit, digits);
        printf("%d^%d", digit, digits);
        if (divisor >= 10) {
            printf(" + ");
        }
        divisor /= 10;
    }
    printf(" = %lld\n\n", sum);
    
    if (isArmstrong(number)) {
        printf("Result: %lld IS an Armstrong number!\n", number);
    } else {
        printf("Result: %lld is NOT an Armstrong number.\n", number);
    }
    
    printf("==========================================\n");
    return 0;
}
