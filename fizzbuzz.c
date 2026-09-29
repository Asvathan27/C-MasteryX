#include <stdio.h>

int main() {
    printf("==========================================\n");
    printf("         FIZZBUZZ LOGIC PUZZLE            \n");
    printf("          (Numbers from 1 to 100)         \n");
    printf("==========================================\n");
    
    for (int i = 1; i <= 100; i++) {
        if (i % 15 == 0) { // Divisible by both 3 and 5
            printf("%3d: FizzBuzz\n", i);
        } else if (i % 3 == 0) { // Divisible by 3 only
            printf("%3d: Fizz\n", i);
        } else if (i % 5 == 0) { // Divisible by 5 only
            printf("%3d: Buzz\n", i);
        } else { // Not divisible by 3 or 5
            printf("%3d: %d\n", i, i);
        }
    }
    
    printf("==========================================\n");
    return 0;
}
