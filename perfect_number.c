#include <stdio.h>

// Function to check if a number is a Perfect Number and print its divisors
int isPerfectNumber(long long num) {
    if (num <= 1) {
        return 0; // Proper divisors sum for <= 1 cannot equal the number
    }
    
    long long sumOfDivisors = 0;
    
    printf("Proper divisors of %lld: ", num);
    int first = 1;
    for (long long i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sumOfDivisors += i;
            if (!first) {
                printf(" + ");
            }
            printf("%lld", i);
            first = 0;
        }
    }
    printf(" = %lld\n\n", sumOfDivisors);
    
    return sumOfDivisors == num;
}

int main() {
    long long number;
    
    printf("==========================================\n");
    printf("         PERFECT NUMBER CHECKER           \n");
    printf("==========================================\n");
    printf("Enter a positive integer: ");
    
    if (scanf("%lld", &number) != 1 || number <= 0) {
        printf("Invalid input! Please enter a positive integer greater than 0.\n");
        return 1;
    }
    
    printf("\nChecking number: %lld\n", number);
    
    if (isPerfectNumber(number)) {
        printf("Result: %lld IS a Perfect Number!\n", number);
        printf("(The sum of its proper divisors equals %lld)\n", number);
    } else {
        printf("Result: %lld is NOT a Perfect Number.\n", number);
    }
    
    printf("==========================================\n");
    return 0;
}
