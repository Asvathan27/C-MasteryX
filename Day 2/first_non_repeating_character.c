#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000
#define ASCII_SIZE 256

/**
 * Finds the first non-repeating character in a string.
 * Time Complexity:  O(n) - Two linear passes
 * Space Complexity: O(1) - Fixed size 256-element frequency lookup table
 *
 * Returns the first unique character, or '\0' if no unique character exists.
 */
char findFirstNonRepeatingChar(const char *str) {
    int freq[ASCII_SIZE] = {0};

    // First pass: Record frequency of each character (case-sensitive)
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Second pass: Find the first character in original order with frequency 1
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }

    return '\0'; // Return null character if all characters repeat
}

int main() {
    char input[MAX_LEN];

    printf("========================================\n");
    printf("     First Non-Repeating Character      \n");
    printf("========================================\n");
    printf("Enter a string: ");

    if (fgets(input, sizeof(input), stdin) != NULL) {
        // Remove trailing newline character if present
        size_t len = strlen(input);
        if (len > 0 && input[len - 1] == '\n') {
            input[len - 1] = '\0';
        }

        char result = findFirstNonRepeatingChar(input);

        if (result != '\0') {
            printf("Output: %c\n", result);
        } else {
            printf("Output: -1\n");
        }
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}
